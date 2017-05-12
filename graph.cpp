#include "graph.h"

#include <iostream>
#include <vector>
#include <math.h>
#include <random>

#include "game.h"
#include "queue.h"
#include "tags.h"

using namespace std;

Graph::Graph () {
    this->games = new unordered_map<string, Game* >();
}

Graph::~Graph () {
    unordered_map<string, Game * >::iterator it = this->games->begin();
    while ( it != this->games->end() ) {
        delete it->second;
        it++;
    }
    delete this->games;
}

void Graph::clean_games() {

    unordered_map<string, Game * >::iterator it = this->games->begin();

    while ( it != this->games->end() ) {

        it->second->d = -1;
        it->second->pi = NULL;

        it++;
    }
}

void Graph::add_game(Game *game) {
    this->games->insert(pair<string, Game * >(game->name, game));
}

Game * Graph::get_game( string name ) {
    return this->games->at(name);
}

void Graph::connect_games( string game_u, string game_v ) {
    Game *u, *v;
    u = this->games->at(game_u);

    v = this->games->at(game_v);
    
	this->connect_games( u, v );
}

void Graph::connect_games( Game *u, Game *v ) {
    u->add_edge(v);
    v->add_edge(u);
	//cout << "Connected" << endl;
}

void print_selection(vector< Game * > &selection) {
	Game * game;
	for(unsigned i = 0; i < selection.size(); i++){
		game = selection.at(i);
		cout << game->name << endl;
		cout << "\tDeveloper: " << game->developer << endl;
		cout << "\tPublisher: " << game->publisher << endl;
		cout << "\tTags: ";
		game->print_tags();
	}
}

void Graph::query_publisher( bool OR, string publisher, string publisher_2 ) {

	vector< Game * > selection;
	unordered_map<string, Game * >::iterator it = this->games->begin();
    while ( it != this->games->end() ) {

	    if(OR){
			if( it->second->publisher == publisher or it->second->publisher == publisher_2 ){
				selection.push_back(it->second);
			}
		}
		else{
			if( it->second->publisher == publisher ){
				selection.push_back(it->second);
			}
		}

        it++;
    }

	print_selection(selection);
}

void Graph::query_developer( bool OR, string developer, string developer_2 ){
	vector< Game * > selection;
	unordered_map<string, Game * >::iterator it = this->games->begin();
    while ( it != this->games->end() ) {

	    if(OR){
			if( it->second->developer == developer or it->second->developer == developer_2 ){
				selection.push_back(it->second);
			}
		}
		else{
			if( it->second->developer == developer ){
				selection.push_back(it->second);
			}
		}

        it++;
    }

	print_selection(selection);
}

void Graph::query_name( bool OR, string name_a, string name_b ){
	vector< Game * > selection;
	unordered_map<string, Game * >::iterator it = this->games->begin();
    while ( it != this->games->end() ) {

	    if(OR){
			if( it->second->name == name_a or it->second->name == name_b ){
				selection.push_back(it->second);
			}
		}
		else{
			if( it->second->name == name_a ){
				selection.push_back(it->second);
			}
		}

        it++;
    }

	print_selection(selection);
}

void Graph::query_tags(bool AND, bool OR, string tag_a_string, string tag_b_string) {
	vector< Game * > selection;
	int tag_a, tag_b;
	tag_a = 0;
	if(AND or OR){
		tag_b = 0;
	}

	unordered_map<string, Game * >::iterator it = this->games->begin();
    while ( it != this->games->end() ) {

	    if(OR){
			for(int i = 0; i < it->second->tags_size; i++){
				if(it->second->tags[i] == tag_a or it->second->tags[i] == tag_b ){
					selection.push_back(it->second);
				}
			}
		}
		else if(AND) {
			for(int i = 0; i < it->second->tags_size; i++){
				if(it->second->tags[i] == tag_a and it->second->tags[i] == tag_b ){
					selection.push_back(it->second);
				}
			}
		}
		else {
			for(int i = 0; i < it->second->tags_size; i++){
				if( it->second->tags[i] == tag_a ){
					selection.push_back(it->second);
				}
			}
		}

        it++;
    }

	print_selection(selection);
}

void Graph::insert_game( Game * g ) {
	
	//get lg graph size number
	int lgn = log2( this->games->size() );
	lgn = (lgn < 1) ? 1 : lgn;
	
	//Generate random numbers
	random_device rd;
	mt19937 gen( rd() );
	uniform_int_distribution<> dis( 0, this->games->size() - 1 );
	
	//Generate lg n random numbers
	unordered_map<string, Game * >::iterator it = this->games->begin();
	Game *max, 
		 *current;
	
	int max_similarity = 100,
		current_simlarity;
	
	//get the highest similarity from those games
	for ( int i = 0; i < lgn; i++ ) {
		it = this->games->begin();
		for ( int j = 0, k = dis(gen); j < k; j++, it++ ) {
			//cout << "k: " << k << endl;
		}

		current = it->second;
		current_simlarity = g->calculate_similarity( current->tags, current->tags_size );
		if ( current_simlarity < max_similarity ) {
			max = current;
			max_similarity = current_simlarity;
		}
	}

	//pass through its adjacent games and take them
	this->clean_games();
	Queue< Game > *miguelito_queue = max->recommend( 50 );
	//cout << "Dequeueing " << miguelito_queue->dequeue()->name << endl;	
	//miguelito_queue->dequeue();
	int miguelito_size = miguelito_queue->get_size();

	Game *selected_games[ miguelito_size ];
	int similarities[ miguelito_size ];

	for ( int i = 0; !miguelito_queue->is_empty(); i++ ) {
		selected_games[i] = miguelito_queue->dequeue();
		similarities[i] = g->calculate_similarity( selected_games[i]->tags, selected_games[i]->tags_size );
	}
	
	delete miguelito_queue;
	//counto sorto them by similarities
	Game *sorted_games[ miguelito_size ];

	int C [100];
	for ( int i = 0; i < 100; i++ ) 
		C[i] = 0;
	
	for ( int i = 0; i < miguelito_size; i++ ) 
		C[ similarities[i] ]++;

	for ( int i = 1; i < 100; i++ )
		C[i] = C[i] + C[i - 1];
	
	int k = miguelito_size;
	while ( k --> 0) {
	//for ( int k = miguelito_size - 1; k >= 0; k-- ) {
		sorted_games[ C[ similarities[k] ] - 1 ] = selected_games[k];
		C[ similarities[k] ]--;
	}

	//cout << sorted_games[0]->name << endl;

	//take a constant from those 
	k = log10( g->tags_size ) / 2;
	k = ( k == 0 ) ? 1 : k;
	for ( int i = 0; i < k && i < miguelito_size; i++ ) {
		//cout << g->name << " - " << sorted_games[i]->name << endl;
		this->connect_games( g, sorted_games[i] );
	}
}

Game * Graph::insert_game( string name, string developer, string publisher, string *tags, int tags_size ) {
	Game *g = new Game ( name, developer, publisher );
    int *t = new int[tags_size];

	for ( int i = 0; i < tags_size; i++ ) {
		t[i] = Tags::search( tags[i] );
	}

	g->set_tags( t, tags_size );

	//cout << "size: " << this->games->size() << endl;

	if ( this->games->size() >= 1 && tags_size > 0)
		this->insert_game( g );

	this->add_game( g );

	return g;
}

int Graph::get_size() {
	return this->games->size();
}
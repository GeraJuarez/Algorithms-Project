#include "graph.h"
#include "game.h"
#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>

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
    u->add_edge(v);
    v->add_edge(u);
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

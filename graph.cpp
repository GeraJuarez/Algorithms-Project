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

void printSelection(vector< Game * > &selection) {
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

void Graph::queryPublisher( bool OR, string publisher, string publisher_2 ) {

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

	printSelection(selection);
}

void Graph::queryDeveloper( bool OR, string developer, string developer_2 ){
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

	printSelection(selection);
}

void Graph::queryName( bool OR, string name_a, string name_b ){
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

	printSelection(selection);
}

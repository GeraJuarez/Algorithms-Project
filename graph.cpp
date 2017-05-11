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

void Graph::queryPublisher( bool OR, string publisher, string publisher_2 ){

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
}

void Graph::queryName( bool AND, bool OR, string name_a, string name_b ){
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
}

int main() {

    Graph g;

    Game *g1 = new Game ( "Light Souls", "Bamco Namdai", "2020" );
    int LS_tags[3] = {1, 4, 6};
    g1->set_tags(LS_tags, 3);

    Game *g2 = new Game ( "Waifu Souls", "Triangle Enix", "2018" );
    int WS_tags[5] = {1, 5, 7, 8, 9};
    g2->set_tags(WS_tags, 5);

    g.add_game(g2);
    g.add_game(g1);

    g.connect_games("Light Souls", "Waifu Souls");

    cout << g.get_game("Waifu Souls")->developer << endl;
    cout << g.get_game("Waifu Souls")->publisher << endl;
    cout << g.get_game("Waifu Souls")->d << endl;
    g.clean_games();
    cout << g.get_game("Waifu Souls")->d << endl;

    return 0;
}

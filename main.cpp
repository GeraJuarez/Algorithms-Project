#include <iostream>

#include "graph.h"
#include "game.h"
#include "queue.h"
#include "tags.h"

using namespace std;

int main() {

	Tags::add_tag("Action");
	Tags::add_tag("Adventure");
	Tags::add_tag("Hard");
	Tags::add_tag("Like");
	Tags::add_tag("My");
	Tags::add_tag("Dick");

    Graph g;

    Game *g1 = new Game ( "Light Souls", "Bamco Namdai", "2020" );
    int LS_tags[3] = {1, 5, 7};
    g1->set_tags(LS_tags, 3);



    Game *g2 = new Game ( "Waifu Souls", "Triangle Enix", "2018" );
    int WS_tags[5] = {1, 5, 7, 8, 9};
    g2->set_tags(WS_tags, 5);



    g.add_game(g2);
    g.add_game(g1);

    g.connect_games("Light Souls", "Waifu Souls");

    //cout << g.get_game("Waifu Souls")->developer << endl;
    //cout << g.get_game("Waifu Souls")->publisher << endl;
    //cout << g.get_game("Waifu Souls")->d << endl;
    //g.clean_games();
    //cout << g.get_game("Waifu Souls")->d << endl;

	//g.query_developer(false, "Triangle Enix", "");

	//g.query_name(true, "Waifu Souls", "Light Souls");

    //g.query_publisher(true, "2020", "2018");


    //g1->add_edge(g2);
    g1->print_adj();

	g.clean_games();

    Queue<Game> *Q = g1->recommend(1000);

    while(!Q->is_empty()){
        Game *gg = Q->dequeue();
        cout << gg->name << endl;
    }

    return 0;
}

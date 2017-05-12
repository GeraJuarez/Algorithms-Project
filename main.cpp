#include <iostream>

#include "graph.h"
#include "game.h"
#include "queue.h"

using namespace std;

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

	cout << "Hey" << endl;

    //g.connect_games("Light Souls", "Waifu Souls");

	cout << "Hey" << endl;

    cout << g.get_game("Waifu Souls")->developer << endl;
    cout << g.get_game("Waifu Souls")->publisher << endl;
    cout << g.get_game("Waifu Souls")->d << endl;
    g.clean_games();
    cout << g.get_game("Waifu Souls")->d << endl;

	g.queryDeveloper(false, "Triangle Enix", "");

	g.queryName(true, "Waifu Souls", "Light Souls");

    g.queryPublisher(true, "2020", "2018");

    return 0;
}

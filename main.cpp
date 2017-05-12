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

    Game *light = new Game ( "Light Souls", "Bamco Namdai", "2020" );
    int LS_tags[3] = {1, 5, 7};
    light->set_tags(LS_tags, 3);



    Game *waifu = new Game ( "Waifu Souls", "Triangle Enix", "2018" );
    int WS_tags[5] = {1, 5, 7, 8, 9};
    waifu->set_tags(WS_tags, 5);



    g.add_game(waifu);
    g.add_game(light);

    g.connect_games("Light Souls", "Waifu Souls");

    //cout << g.get_game("Waifu Souls")->developer << endl;
    //cout << g.get_game("Waifu Souls")->publisher << endl;
    //cout << g.get_game("Waifu Souls")->d << endl;
    //g.clean_games();
    //cout << g.get_game("Waifu Souls")->d << endl;

	//g.query_developer(false, "Triangle Enix", "");

	//g.query_name(true, "Waifu Souls", "Light Souls");

    //g.query_publisher(true, "2020", "2018");


    // light->add_edge(waifu);

    cout << light->adj->get_value(100)->name << endl;

    light->print_adj();
    waifu->print_adj();

	g.clean_games();

    // Queue<Game> R;
    // R.enqueue(light);
    // R.enqueue(waifu);
    // while(!R.is_empty()){
    //     Game *gg = R.dequeue();
    //     cout << gg->name << endl;
    // }

    Queue<Game> *Q = waifu->recommend(1000);

    while(!Q->is_empty()){
        Game *gg = Q->dequeue();
        cout << gg->name << endl;
    }

    return 0;
}

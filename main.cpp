#include <iostream>
#include <string>

#include "graph.h"
#include "game.h"
#include "queue.h"
#include "tags.h"

using namespace std;

int old_main() {

	Tags::add_tag("Action");
	Tags::add_tag("Adventure");
	Tags::add_tag("Hard");
	Tags::add_tag("Like");
	Tags::add_tag("My");
	Tags::add_tag("Dick");

    Graph g;

    Game *light = new Game ( "Light Souls", "Bamco Namdai", "2020" );
    int LS_tags[4] = {1, 4, 5, 7};
    light->set_tags(LS_tags, 4);



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

    // cout << light->adj->get_value(0)->name << endl;

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

    Queue<Game> *Q = waifu->recommend(40);

    while(!Q->is_empty()){
        Game *gg = Q->dequeue();
        cout << gg->name << endl;
    }

    g.clean_games();

    waifu->dijkstra(light, 2);
    cout << "===== Dijkstra =====" << endl;
    Game *ggg = light;
    while(ggg != NULL){
        cout << ggg->name << endl;
        ggg = ggg->pi;
    }

    return 0;
}

<<<<<<< HEAD
int older_main() {
=======
int old2_main() {
>>>>>>> cf57148cd777c8e4bf5bfa065331e93e57c32ec2
    Graph g;
    
    string waif_tag[2] = {"Nudity", "Anime"};
    Game *waifu = g.insert_game( "Waifu Souls II", "Polygon Enix", "Balbe", waif_tag, 2 );

    string sekura_tag[3] = {"Nudity", "Anime", "Clicker"};
    Game *sekura = g.insert_game( "Sekura Kliker", "Lilteldo", "Hakty Vishon", sekura_tag, 3 );

    string laijt_tag[4] = {"Hard", "Like", "Adventure", "Non-Darks"};
    Game *laijt = g.insert_game( "Light Souls", "Bamco Namdai", "Back Hardware", laijt_tag, 4 );

    string waifu_tag[3] = {"Nudity", "Anime", "Action"};
    Game *guaifu = g.insert_game( "Waifu Souls", "Polygon Enix", "Back HArdware", waifu_tag, 3 );

    g.clean_games();

    Queue<Game> *Q = laijt->recommend(100);

    while(!Q->is_empty()){
        Game *gg = Q->dequeue();
        cout << gg->name << endl;
    }

    // waifu->dijkstra(guaifu, g.get_size());
    // cout << "===== Dijkstra =====" << endl;
    // Game *ggg = guaifu;
    // while(ggg != NULL){
    //     cout << ggg->name << endl;
    //     ggg = ggg->pi;
    // }

    return 0;
}

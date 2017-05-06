#ifndef __GRAPH_H_INCLUDED__
#define __GRAPH_H_INCLUDED__

#include <unordered_map>
#include <string>

using namespace std;

//class unordered_map;
class Game;

//hash table,
class Graph {
private:
    unordered_map<string, Game * > *games;

public:
    Graph();
    ~Graph();
    void clean_games();
    void add_game( Game *game );
    Game * get_game( string name );
    void connect_games( string game_u, string game_v );
};

#endif
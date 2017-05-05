#include <iostream>

#include <"queue.h">

using namespace std;

class Game {
public:
  string name;
  string developer;
  int year;
  RedBlackTree adj;
  Game(string name, string developer, int year) {
    this->name = name;
    this->developer = developer;
    this->year = year;
    this->adj = new RedBlackTree();
  }
  void add_edge(Game *end){
    Edge *e = new edge(end, 0/* Call method to get closeness */);
    this->adj.insert(e, e->weight);
  }

};

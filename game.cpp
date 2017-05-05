#include <iostream>

#include "queue.h"

using namespace std;

class Game {
private:
  RedBlackTree *adj;
  int d;
  Game *pi;
  void add_adj(rbnode *it, Queue<Game> Q){
    
  }
public:
  string name;
  string developer;
  int year;
  Game(string name, string developer, int year) {
    this->name = name;
    this->developer = developer;
    this->year = year;
    this->adj = new RedBlackTree();
    this->d = 0;
    this->pi = NULL;
  }
  void add_edge(Game *end){
    Edge *e = new edge(end, 0/* Call method to get closeness */);
    this->adj.insert(e, e->weight);
  }
  Queue<Game> * recommend(int threshold){
    Queue<Game> *R = new Queue();
    Queue<Game> Q();
    // Clean nodes
    this->d = 0;
    this->pi = NULL;
    Q.enqueue(this);
    while(!Q.is_empty()){
      Game g = Q.dequeue();
      g->adj->get_it();
    }
    return R;
  }
};

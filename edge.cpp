#include "game.cpp"

class Edge {
public:
  Game *from;
  Game *to;
  int weight;
  Edge(Game *from, Game *to, int weight) {
    this->from = from;
    this->to = to;
    this->weight = weight;
  }
};

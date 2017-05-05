#ifndef __EDGE_H_INCLUDED__
#define __EDGE_H_INCLUDED__

class Game;

class Edge {
public:
  Game *to;
  int weight;
  Edge(Game *to, int weight);
};

#endif

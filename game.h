#ifndef __GAME_H_INCLUDED__
#define __GAME_H_INCLUDED__

#include "queue.h"
#include "rbtree.h"
// #include "edge.h"

class Game {
private:
  RedBlackTree<Game> *adj;
  void add_adj(rbnode<Game> *it, Queue<Game> Q, rbnode<Game> *nil, int d, int t);
public:
  string name;
  string developer;
  string publisher;
  int *tags;
  int tags_size;
  int d;
  Game *pi;
  Game(string name, string developer, string publisher);
  void add_edge(Game *end);
  Queue<Game> * recommend(int threshold);
  void set_tags( int *t, int s );
  int calculate_similarity( int *b, int size_b );
  void print_tags();
};

#endif

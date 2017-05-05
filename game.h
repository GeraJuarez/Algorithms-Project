#ifndef __GAME_H_INCLUDED__
#define __GAME_H_INCLUDED__

#include "queue.h"
#include "rbtree.h"
#include "edge.h"

class Tags {
public:
  static int get_size();
};

class Game {
private:
  RedBlackTree<Game> *adj;
  int d;
  Game *pi;
  void add_adj(rbnode<Game> *it, Queue<Game> Q, rbnode<Game> *nil, int d);
public:
  string name;
  string developer;
  int year;
  int *tags;
  int tags_size;
  Game(string name, string developer, int year);
  void add_edge(Game *end);
  Queue<Game> * recommend(int threshold);
  void set_tags( int *t, int s );
  int calculate_similarity( int *b, int size_b );
};

#endif

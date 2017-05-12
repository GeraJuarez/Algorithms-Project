#ifndef __GAME_H_INCLUDED__
#define __GAME_H_INCLUDED__

#include "queue.h"
#include "rbtree.h"
#include "min_p_queue.h"

class Game {
private:
  void add_adj(rbnode<Game> *it, Queue<Game> *Q, rbnode<Game> *nil, int d, int t);
  void add_adj_min(rbnode<Game> *it, MinPQueue<Game> *Q, rbnode<Game> *nil, Game *g);
  void print_adj(rbnode<Game> *it, rbnode<Game> *nil);
public:
  RedBlackTree<Game> *adj;
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
  void dijkstra(Game *end, int n);
  void set_tags(int *t, int s);
  int calculate_similarity(int *b, int size_b);
  void print_tags();
  void print_adj();
  bool operator>(const Game &b);
  bool operator<(const Game &b);
};

#endif

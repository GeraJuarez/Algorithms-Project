#include "game.h"

#include <iostream>
#include <string>

#include "tags.h"

using namespace std;

void Game::add_adj(rbnode<Game> *it, Queue<Game> Q, rbnode<Game> *nil, int d, int t){
  if(it == nil) return;
  add_adj(it->left, Q, nil, d, t);
  if(it->value->d != -1 && d + it->key < t){
    Q.enqueue(it->value);
    it->value->d = d + it->key;
  }
  add_adj(it->right, Q, nil, d, t);
}
Game::Game(string name, string developer, string publisher) {
  this->name = name;
  this->developer = developer;
  this->publisher = publisher;
  this->adj = new RedBlackTree<Game>();
  this->d = 0;
  this->pi = NULL;
}

void Game::add_edge(Game *end){
  this->adj->insert(this->calculate_similarity(end->tags, end->tags_size), end);
}

Queue<Game> * Game::recommend(int threshold){
  Queue<Game> *R = new Queue<Game>();
  Queue<Game> Q;
  // Clean nodes
  this->d = 0;
  this->pi = NULL;
  Q.enqueue(this);
  while(!Q.is_empty()){
    Game *g = Q.dequeue();
    R->enqueue(g);
    rbnode<Game> *it, *nil;
    it = g->adj->get_it(&nil);
    g->add_adj(it, Q, nil, g->d, threshold);
  }
  return R;
}
void Game::set_tags( int *t, int s ) {
  this->tags_size = s;
  this->tags = t;
}

void Game::print_tags() {
	for ( unsigned i = 0; i < this->tags_size - 1; i++ ) {
    cout << Tags::get_tag( this->tags[i] ) << ", ";
  }
  cout << Tags::get_tag( this->tags[this->tags_size - 1] ) << endl;
}

void Game::print_adj() {
	this->adj->print_inorder_inverse();
}

int Game::calculate_similarity( int *b, int size_b ) {

  int *a;
  a = this->tags;
  int size_a = this->tags_size;

  int n = Tags::get_size();
  int c[n];                   //array that counts repeated 'tags'
  int hits = 0;               //counts the number tags that are in both arrays

  for ( int i = 0; i < n; i++ ) {
    //Initialize the array to 0
    c[i] = 0;
  }

  for ( int i = 0; i < size_a; i++ ) {
    //Counts tags from array a
    c[ a[i] ]++;
  }

  for ( int i = 0; i < size_b; i++ ) {
    //Counts tags from array b
    if ( c[ b[i] ] + 1 == 2 ) {
      //when tag is repeated, the similarity between the arrays increses
      hits++;
    }
  }

  int similarity = ( (double)hits / (double)size_a ) * 100; //Calculate porcentual similarity

  return similarity;
}

/*

int main() {

  Game g1( "Light Souls", "Bamco Namdai", 2020 );
  int LS_tags[3] = {1, 4, 6};
  g1.set_tags(LS_tags, 3);

  Game g2( "Waifu Souls", "Triangle Enix", 2018 );
  int WS_tags[5] = {1, 5, 7};
  g2.set_tags(WS_tags, 5);

  cout << "Edge from Light Souls to waifu Souls: "<< g1.calculate_similarity(g2.tags, g2.tags_size) << endl;

  cout << "Edge from Waifu Souls to Light Souls: "<< g2.calculate_similarity(g1.tags, g1.tags_size) << endl;

  return 0;
}
*/

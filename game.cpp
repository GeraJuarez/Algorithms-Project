#include <iostream>
//#include "queue.h"

using namespace std;

class RedBlackTree;

class Tags {
  public:
  static int get_size() {
    return 10;
  }

};

class Game {
  public:
  string name;
  string developer;
  int year;
  int *tags;
  int tags_size;
  RedBlackTree *adj;
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
  void set_tags( int *t, int s ) {
    this->tags_size = s;
    this->tags = t;
  }

  //private:

  int calculate_similarity( int *b, int size_b ) {

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

    int similarity = ( hits / size_a ) * 100; //Calculate porcentual similarity

    return similarity;
  }

};

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

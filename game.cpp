#include <iostream>

using namespace std;

class Tags {
  public:
  static int get_size() {
    return 0;
  }

};

class Game {
  public:
  string name;
  string developer;
  int year;
  int *tags;
  int tags_size;
  Game(string name, string developer, int year) {
    this->name = name;
    this->developer = developer;
    this->year = year;
  }

  private:

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
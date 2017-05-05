#include <iostream>

using namespace std;

class Game {
public:
  string name;
  string developer;
  int year;
  Game(string name, string developer, int year) {
    this->name = name;
    this->developer = developer;
    this->year = year;
  }
};

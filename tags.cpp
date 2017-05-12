#include "tags.h"

// #include <string>
// #include <vector>

using namespace std;

vector<string> Tags::tags;

int Tags::get_size() {
  return tags.size();
  //return 0;
}
int Tags::add_tag(string tf) {
  //Tags::tags.push_back(tf);
  return 0;
}
string Tags::get_tag(int i) {
  //return Tags::tags.at(i);
  return "";
}

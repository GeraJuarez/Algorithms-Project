#include "tags.h"

// #include <string>
// #include <vector>

using namespace std;

vector<string> Tags::tags;

int Tags::get_size() {
  return tags.size();
}
int Tags::add_tag(string tf) {
  
  for ( unsigned i = 0; i < tags.size(); i++ ) {
    if ( tags.at(i) == tf ) {
      cout << "Tag already exists" << endl;
      return -1;
    }
  }

  tags.push_back(tf);
  return tags.size() - 1;
}
string Tags::get_tag(int i) {
  return tags.at(i);
}
int Tags::search(string s) {
  for ( unsigned i = 0; i < tags.size(); i++ ) {
    if ( s == tags.at(i) ) {
      return i;
    }
  }
  return -1;
}
//print tags from games
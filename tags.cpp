#include "tags.h"

#include <string>
#include <vector>

using namespace std;

int Tags::get_size() {
  return tags.size();
}
void Tags::add_tag(string tf) {
  tags.push_back(tf);
}
string Tags:get_tag(int i) {
  return tags.at(i);
}


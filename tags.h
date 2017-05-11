#ifndef __TAGS_H_INCLUDED__
#define __TAGS_H_INCLUDED__

#include <string>
#include <vector>

using namespace std;

class Tags {

private:
  vector<string> tags;

public:
  static int get_size();
  void add_tag(string tg);
  string get_tag(int i);

};

#endif

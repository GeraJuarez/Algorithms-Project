#ifndef __TAGS_H_INCLUDED__
#define __TAGS_H_INCLUDED__

#include <string>
#include <vector>

using namespace std;

class Tags {

private:
  static vector< string > tags;

public:
  //static void initialize();
  static int get_size();
  static int add_tag(string tg);
  static string get_tag(int i);
  static int search(string s);
};

#endif

#include <iostream>
#include <map>

using namespace std;

int main() {

  map<string, int> gradeBook;

  gradeBook["Fred"] = 10;
  gradeBook["Helen"] = 1;
  gradeBook["Zeus"] = 4;
  gradeBook["Bob"] = 8;

  map<string, int>::iterator it;

  for (it = gradeBook.begin(); it != gradeBook.end(); it++) {
    cout << it->first << " => " << it->second << endl;
  }

  return 0;
}

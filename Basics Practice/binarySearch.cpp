#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

  int nums[] = {1,2,3,4,5,9,8,7,6};
  vector<int> vec(nums,nums+9);

  sort(vec.begin(), vec.end());

  vector<int>::iterator it;

  cout << "Sorted vector is: ";
  for (it = vec.begin(); it != vec.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;

  cout << "Looking for a 3..." << endl;
  if (binary_search(vec.begin(), vec.end(), 3)) {
    cout << "found!\n";
  }
  else {
    cout << "not found!\n";
  }

  return 0;
}

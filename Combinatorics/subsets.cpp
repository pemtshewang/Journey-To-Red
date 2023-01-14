#include <algorithm>
#include <bits/stdc++.h>
#include <map>
#include <utility>
using namespace std;

#define VI vector<int>
int main(int argc, char *argv[]) {
  map<char, int> test;
  test.insert(make_pair('3', 3));
  for (int i = 0; i < test.size(); i++) {
    cout << test[i] << endl;
  }
  return 0;
}

### Useful C++ STL

```cpp
// next_permutation(permutation.begin(), permutation.end());

#include <bits/stdc++.h>
using namespace std;

#define VI vector<int>
int main(int argc, char *argv[]) {
  VI permutation{1, 2, 3};
  do {
    for (int i : permutation) {
      cout << i << " ";
    }
    cout << endl;
    // iterates all the possible permutation for the given vector or a array
  } while (next_permutation(permutation.begin(), permutation.end()));
  return 0;
}

```

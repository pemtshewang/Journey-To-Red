#include <bits/stdc++.h>
using namespace std;

void generate(int series);
void generate(int series) {
  int a = 0, b = 1, c;
  while (series--) {
    cout << a << endl;
    c = a + b;
    a = b;
    b = c;
  }
}
int main(int argc, char *argv[]) {
  generate(8);
  return 0;
}

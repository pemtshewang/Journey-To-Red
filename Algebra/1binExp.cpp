#include <cstdint>
#include <iostream>

using namespace std;

int64_t binExp(int64_t a, int64_t b);

// The algorithm behind the binary exponentiation.This algorithm trys to find
// the power of the number in O lg n time complexity instead of the naive O n
// Idea is to change the exponent to binary and add all the squares of the
// base if the particular bit of the exponent is set
// Example : 2 ^ 4
// 0100
// The available power are
// 16 4 2
// 1 0 0
// As we can see, we multiply the only the 16 with result in log n
int64_t binExp(int64_t a, int64_t b) {
  int64_t res = 1;
  while (b > 0) {
    if (b & 1) {
      res = (res * a);
    }
    a = a * a;
    b >>= 1;
  }
  return res;
}

int main(int argc, char *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout << binExp(3, 4) << endl;
  return 0;
}

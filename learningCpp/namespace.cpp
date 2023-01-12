#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
constexpr int g_epsilum = 343;
namespace foo {
void printName() { cout << "Hello World I am inside foo"; }
} // namespace foo
namespace bar {
void printName() { cout << "Hello World I am inside bar"; }
} // namespace bar
int main(int argc, char *argv[]) {
  namespace foo = bar;
  foo::printName();
  bar::printName();
  int64_t number = 344;
  cout << sizeof(int64_t);
}

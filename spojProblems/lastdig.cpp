#include <bits/stdc++.h>
#include <bits/stdint-intn.h>
#include <cstdint>
using namespace std;

const int64_t M = 1000000007;

int64_t binPow(int64_t a, int64_t b){
  a %= M;
  int64_t res = 1;
  while(b){
    if(b&1)
      res = (res * a)%M;
    a = (a * a) % M;
    b >>= 1;
  }
  return res;
}
int lastDig(int64_t a){
  return a%10;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--){
        int64_t a,b;
        cin >> a >> b;
        int64_t res = binPow(a,b);
        int lastDigit = lastDig(res);
        cout << lastDigit << "\n";
   }

   return 0;
}

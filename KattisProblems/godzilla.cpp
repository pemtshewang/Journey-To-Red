#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while (t--) {
        int m,g;
        cin >> g >> m;
        vector<int> godzilla(g);
        vector<int> mgodzilla(m);
        for(int i=0; i<g; i++) cin >> godzilla[i];
        for(int i=0; i<m; i++) cin >> mgodzilla[i];
        *max_element(godzilla.begin(), godzilla.end()) == *max_element(mgodzilla.begin(), mgodzilla.end()) ? printf("Godzilla\n"):*max_element(godzilla.begin(), godzilla.end()) > *max_element( mgodzilla.begin(), mgodzilla.end())?printf("Godzilla\n"):printf("MechaGodzilla\n");
   }

   return 0;
}

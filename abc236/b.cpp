#include <bits/stdc++.h> 
using namespace std;
int main() {
  int n;
  cin >> n;
  map<int, int> m;
  int cnt = 4*n;
  for(int i=0; i<cnt-1;++i) {
    int v; cin >> v;
    m[v]++;
  }

  auto it = m.begin();
  while(it != m.end()) {
    if(it->second == (3)) {
      cout << it->first << endl;
      break;
    }
    ++it;
  }
  return 0;
}

#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a,b;
  while(1) {
    cin >> a >> b;
    if(!a && !b) break;
    cout << ((a>b) ? "Yes" : "No") << endl;
  }

  return 0;
}

#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int min = 1000001, max = -1000001;
  int n; cin >> n;
  for(int i=0; i<n; ++i) {
    int t; cin >> t;
    min = (t < min) ? t : min;
    max = (t > max) ? t : max;
  }
  cout << min << ' ' << max << endl;
  return 0;
}

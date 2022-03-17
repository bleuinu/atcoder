#include <bits/stdc++.h> 
using namespace std;
#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int main() {
  int n;
  cin >> n;
  vector<int> v;

  for(int i=0; i<n; ++i) {
    int t; cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  for(int i=0; i<n; ++i) {
    cout << v[i] << endl;
  }
  return 0;
}

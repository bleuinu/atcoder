#include <bits/stdc++.h>
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)
#define endl '\n'

int mycmp(const string &a, const string &b) {
  const int A = a.length();
  const int B = b.length();
  return ((A == B && (a < b)) || (A < B));
}

int main() {
  vector<string> v;
  set<string> myset;
  int t;
  cin >> t;

  while(t--) {
    string s; cin >> s;
    myset.insert(s);
  }

  auto it = myset.begin();
  while(it != myset.end()) {
    v.push_back(*it);
    ++it;
  }
  
  sort(v.begin(), v.end(), mycmp);

  const int SIZE = v.size();
  for(int i=0; i<SIZE; ++i) {
    cout << v[i] << endl;
  }
  return 0;
}

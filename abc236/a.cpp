#include <bits/stdc++.h> 
using namespace std;
int main() {
  string s;
  cin >> s;
  int a,b;
  cin >> a >> b;
  --a; --b;
  char t = s[a];
  s[a] = s[b];
  s[b] = t;
  cout << s;
  return 0;
}

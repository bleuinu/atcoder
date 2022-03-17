#include <bits/stdc++.h> 
using namespace std;
int main() {
  int n,m;
  scanf("%d%d", &n, &m);
  map<string, bool> st;
  vector<string> vec;

  for(int i=0; i<n; ++i) {
    string s;
    cin >> s;
    st[s] = false;
    vec.push_back(s);
  }

  for(int i=0; i<m; ++i) {
    string s;
    cin >> s;
    auto it = st.find(s);
    if (it != st.end()) st[s] = true;
  }

  auto it = vec.begin();
  while(it != vec.end()) {
    auto temp = st.find(*it);
    if(temp->second)
      printf("Yes\n");
    else 
      printf("No\n");
    ++it;
  }
  return 0;
}

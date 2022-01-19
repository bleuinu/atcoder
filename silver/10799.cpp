#include <bits/stdc++.h> 
using namespace std;

#define ios cin.tie(NULL), ios_base::sync_with_stdio(false)

int main() {
  stack<char> stk;
  string s;
  cin >> s;
  int sticks = 0;

  bool opened = false;

  for(char c : s) {
    if(c == '(') {
      opened = true;
      stk.push(c);
    } else if (c == ')') {
      stk.pop();
      if(opened) {
        opened = false;
        sticks += stk.size();
      } else {
        ++sticks;
      }
    }
  }

  cout << sticks << endl;

  return 0;
}

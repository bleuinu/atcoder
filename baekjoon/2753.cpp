#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int y; cin>>y;
  cout<<((y%4==0 && y%100!=0) || y%400==0);
  return 0;
}

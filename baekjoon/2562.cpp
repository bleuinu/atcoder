#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int max=0, pos=0;
  for(int i=0; i<9; ++i) {
    int t; cin>>t;
    if(t > max) max=t, pos=i+1;
  }
  cout<<max<<endl<<pos;
  return 0;
}

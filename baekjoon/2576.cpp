#include <bits/stdc++.h>
using namespace std;
int main(void){
  int min=100, sum=0;
  for(int i=0;i<7;++i){
    int a; cin>>a;
    if(a&1) {
      sum += a;
      min = a < min ? a : min;
    }
  }

  if(sum==0) cout<<-1;
  else cout << sum << endl << min;

  return 0;
}

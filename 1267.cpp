#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n,a=0,b=0;
  cin >> n;
  for(int i=0; i<n; ++i) {
    int x; cin>>x;
    a += (x/30 + 1) * 10;
    b += (x/60 + 1) * 15;
  }

  if(a==b) printf("Y M %d\n", a);
  else if (a<b) printf("Y %d\n", a);
  else printf("M %d\n", b);
  
  return 0;
}

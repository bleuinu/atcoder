#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int a,b,c;
  cin>>a>>b>>c;
  if(a>b && a>c && b>c) cout<<c<<' '<<b<<' '<<a;
  else if(a>b && a>c && c>b) cout<<b<<' '<<c<<' '<<a;
  else if(b>a && b>c && a>c) cout<<c<<' '<<a<<' '<<b;
  else if(b>a && b>c && c>a) cout<<a<<' '<<c<<' '<<b;
  else if(c>a && c>b && a>b) cout<<b<<' '<<a<<' '<<c;
  else cout<<a<<' '<<b<<' '<<c;
  return 0;
}
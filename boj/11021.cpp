#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, a, b;
  scanf("%d", &t);

  for(int i=1; i<=t; ++i) {
    scanf("%d %d", &a, &b);
    printf("Case #%d: %d\n", i, a+b);
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int a[10] = {0};
  int sum = 0;
  for(int i=0; i<5; ++i) {
    int t; cin >> t;
    a[t/10] += 1;
    sum += t;
  }

  int cnt = 0;
  for(int i=1; i<10; ++i) { 
    if(a[i] != 0) cnt+=a[i];
    if(cnt >= 3) {
      cout << sum/5 << endl << i*10 << endl;
      break;
    }
  }

  return 0;
}

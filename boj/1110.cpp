#include <bits/stdc++.h> 
using namespace std;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int cnt = 1;

  int temp = (n%10)*10 + ((n/10 + n%10))%10;
  while(n != temp) {
    temp = (temp%10)*10 + ((temp/10 + temp%10))%10;
    ++cnt;
  }

  cout << cnt << endl;

  return 0;
}
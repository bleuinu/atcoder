#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int a,b,c;
  cin >> a >> b >> c;
  int d = a*b*c;
  int arr[10] = {0};
  while(d) {
    arr[d%10]++;
    d /= 10;
  }

  for(int i=0; i<10; ++i)
    cout << arr[i] << endl;

  return 0;
}
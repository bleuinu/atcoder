#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, m, temp;
  map<int, int> A;

  scanf("%d", &a);
  for(int i=0; i<a; ++i) {
    scanf("%d", &temp);
    A[temp] = 1;
  }

  scanf("%d", &m);
  for(int i=0; i<m; ++i) {
    scanf("%d", &temp);
    A[temp] += 1;
    printf("%d\n", (A[temp] > 1));
  }

  return 0;
}

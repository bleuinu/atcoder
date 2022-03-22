#include <stdio.h> 
int arr[10001];

int main() {
  int n; scanf("%d", &n);
  int i,j,k;
  for(i=0; i<n; ++i) {
    scanf("%d", &k);
    ++(arr[k]);
  }

  for(i=0; i<10001; ++i) {
    for(j=0; j<arr[i]; ++j) {
      printf("%d\n", i);
    }
  }
  return 0;
}

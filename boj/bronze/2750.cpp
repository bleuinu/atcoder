#include <iostream>
using namespace std; 

int arr[1001];
int main() {
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) {
    cin >> arr[i];
  }

  for(int i=0; i<t; ++i) {
    bool swapped = false;
    for(int j=0; j<t-1-i; ++j) {
      if(arr[j] > arr[j+1]) {
        swapped = true;
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }

    if(!swapped) break;
  }

  for(int i=0; i<t; ++i) {
    cout << arr[i] << endl;
  }
  return 0;
}
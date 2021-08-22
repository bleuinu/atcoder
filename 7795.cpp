#include <bits/stdc++.h> 
using namespace std;

int findMiddle(vector<int> arr, int x) {
  int SIZE = arr.size();
  int low = 0;
  int high = SIZE - 1;
  int mid = 0;
  while(high >= low) {
    mid = low + (high-low)/2;
    if(x == arr[mid]) {
      while(x == arr[mid-1]) {
        --mid;
        if(mid<0) return 0;
      }
      return mid;
    }
    if(x < arr[mid]) high = mid - 1;
    else low = mid + 1;
  }
  return low;
}

int main() {
  int t;
  cin >> t;

  while(t--) {
    int cnt = 0;
    int a,b;
    cin >> a >> b;
    vector<int> arr;
    vector<int> brr;
    for(int i=0; i<a; ++i) {
      int temp; cin >> temp;
      arr.push_back(temp);
    }
    for(int i=0; i<b; ++i) {
      int temp; cin >> temp;
      brr.push_back(temp);
    }

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    for(int x : arr) {
      cnt += findMiddle(brr, x);
    }
    cout << cnt << endl;
  }
  return 0;
}

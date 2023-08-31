#include <iostream>
using namespace std;
int main() {
  int arr[] = {23,3,4,42,53};
  int n = sizeof(arr)/sizeof(arr[0]);

  for (int i = 0; i < n-1; i++) {
    for(int j=0;j<n-i-1;j++) {
      if(arr[j]>arr[j+1]) {
        swap(arr[i],arr[j]);
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

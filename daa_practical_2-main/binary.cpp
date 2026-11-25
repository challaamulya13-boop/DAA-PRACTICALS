#include <iostream>
using namespace std;
int main() {
    int n, num;
    int low, high, mid;
    int i;
     cout<<"Enter the number of elements:";
    cin>>n;
   int arr[n];
   cout<< "Enter sorted elements: ";
    for (i = 0; i < n; i++) {
        cin>> arr[i];
    }
   cout<< "Search element: ";
    cin>> num;
    low = 0;
    high = n - 1;
    while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == num) {
    cout << "Element found";
      return 0;
        }
     if (arr[mid] < num) {
        low = mid + 1;
        }
        else {
        high = mid - 1;
        }
    }
   cout<< "Element not found";
     return 0;
}

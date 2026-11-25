#include <iostream>
using namespace std;
int main(){
    int n;
    int i,j,key;
 cout<< "enter the no of elements: ";
    cin>> n;
       int arr[n];
          cout<<"enter the elements:";
    for(i=0;i<n;i++){
      cin>>arr[i];  
    }
    
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"sorted array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

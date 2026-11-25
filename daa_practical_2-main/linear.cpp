#include<iostream>
using namespace std;
int main(){
    int n,num;
    int i;
 cout<< "enter the no of elements: ";
    cin>> n;
       int arr[n];
          cout<<"enter the elements:";
    for(i=0;i<n;i++){
      cin>>arr[i];  
    }
    cout<<"search element:";
    cin>>num;
    for(i=0;i<=n;i++){
        if(arr[i]==num){
            cout<<"element found" ;
            return 0;
        }
    }
    cout<<"element not found";
    return 0;
}

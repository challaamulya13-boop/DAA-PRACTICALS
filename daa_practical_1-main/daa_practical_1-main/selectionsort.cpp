#include <iostream>
using namespace std;
int main(){
    int n;
    int i,j,temp,min;
 cout<< "enter the no of elements: ";
    cin>> n;
       int arr[n];
          cout<<"enter the elements:";
    for(i=0;i<n;i++){
      cin>>arr[i];  
    }
    
    for(i=0;i<n-1;i++){
        min=i;
    
        for( j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
        
    
    cout<<"sorted array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

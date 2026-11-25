#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter a number:";
cin>>n;
for(int i=n;i>=1;i--){
    fact=fact*i;
}
cout<<"factorial="<<fact;
return 0;
    
}

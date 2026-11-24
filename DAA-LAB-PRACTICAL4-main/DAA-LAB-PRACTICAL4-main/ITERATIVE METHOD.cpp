#include <iostream>
using namespace std;

int main()
{
  int n;
  int factorial=1;
  cout<< "Enter the num:";
  cin >> n;
  if (n < 0)
{
  cout << "Factorial will not come";
}
else{
for(int i = 1;i<= n;i++){
factorial = factorial * i;
}
 cout<< "Factorial of "<<n <<"is:"<<factorial;
  cout<<"\nIterative method";
}
return 0;
}

#include <iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
   cout << "Factorial = " << fact(n);
   return 0;
}
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

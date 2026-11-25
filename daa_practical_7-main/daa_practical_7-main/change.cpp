#include <iostream>
using namespace std;
int main()
{
    int n, amount;
    cout << "Enter number of coins: ";
    cin >> n;
    int d[n + 1];
    cout << "Enter coin denominations: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> d[i];
    }
    cout << "Enter amount: ";
    cin >> amount;
    int c[n + 1][amount + 1];
    for (int i = 0; i <= n; i++)
    {
        c[i][0] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= amount; j++)
        {
            if (i == 1)
            {
                c[i][j] = 1 + c[i][j - d[i]];
            }
            else if (j < d[i])
            {
                c[i][j] = c[i - 1][j];
            }
            else
            {
                c[i][j] = min(c[i - 1][j],
                              1 + c[i][j - d[i]]);
            }
        }
    }
    cout << "\nDP Table:\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= amount; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nMinimum number of coins = "
         << c[n][amount] << endl;

    return 0;
}

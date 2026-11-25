#include <iostream>
using namespace std;
int main()
{
    int n, C;
    cout << "Enter number of items: ";
    cin >> n;
   int W[n], P[n];
   cout << "Enter weights: ";
    for (int i = 0; i < n; i++)
    {
        cin >> W[i];
    }
    cout << "Enter profits: ";
    for (int i = 0; i < n; i++)
    {
        cin >> P[i];
    }
   cout << "Enter capacity: ";
    cin >> C;
    int dp[n + 1][C + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= C; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if (W[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max(
                    dp[i - 1][j],
                    dp[i - 1][j - W[i - 1]] + P[i - 1]
                );
            }
        }
    }
    cout << "\nDP Table:\n";
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= C; j++)
        {
            cout << dp[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMaximum Profit = " << dp[n][C] << endl;

    return 0;
}

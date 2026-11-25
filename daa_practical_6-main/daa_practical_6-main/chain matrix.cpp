#include <iostream>
using namespace std;
int main()
{
    int n;
   cout << "Enter number of matrices: ";
    cin >> n;
    int *p = new int[n + 1];
    cout << "Enter " << n + 1 << " dimensions: ";
    for (int i = 0; i <= n; i++)
    {
        cin >> p[i];
    }
   int **m = new int*[n + 1];
for (int i = 0; i <= n; i++)
    {
        m[i] = new int[n + 1];
for (int j = 0; j <= n; j++)
        {
            m[i][j] = 0;
        }
    }
   for (int length = 2; length <= n; length++)
    {
        for (int i = 1; i <= n - length + 1; i++)
        {
            int j = i + length - 1;
        for (int k = i; k < j; k++)
            {
        int cost = m[i][k] + m[k + 1][j]
         + p[i - 1] * p[k] * p[j];
       if (k == i || cost < m[i][j])
                {
                    m[i][j] = cost;
                }
            }
        }
    }
  cout << "\nTable:\n";
  for (int i = 1; i <= n; i++)
    {
    for (int j = 1; j <= n; j++)
        {
        if (i > j)
        cout << "-\t";
        else
        cout << m[i][j] << "\t";
        }
        cout << endl;
    }
     cout << "\nMinimum multiplication cost = "
         << m[1][n] << endl;
       return 0;
}

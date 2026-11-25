#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    int **a = new int*[n];

    for(int i = 0; i < n; i++)
        a[i] = new int[n];

    cout << "Enter adjacency matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[i][k] + a[k][j] < a[i][j])
                {
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }

    cout << "Shortest Distance Matrix:\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++)
        delete[] a[i];

    delete[] a;

    return 0;
}

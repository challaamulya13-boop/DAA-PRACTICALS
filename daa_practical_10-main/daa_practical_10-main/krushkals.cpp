#include <iostream>
using namespace std;
int main()
{
int n, m;
cout << "Enter number of vertices: ";
cin >> n;
cout << "Enter number of edges: ";
cin >> m;
   int u[m], v[m], w[m];
    int parent[n];
    int i, j, temp;
    int a, b, total = 0, edges = 0;
    cout << "Enter edges (source destination weight):\n";
   for(i = 0; i < m; i++)
    {
        cin >> u[i] >> v[i] >> w[i];
    }
   for(i = 0; i < n; i++)
    {
        parent[i] = i;
    }
   for(i = 0; i < m - 1; i++)
    {
    for(j = 0; j < m - i - 1; j++)
        {
            if(w[j] > w[j + 1])
            {
                temp = w[j];
                w[j] = w[j + 1];
                w[j + 1] = temp;

                temp = u[j];
                u[j] = u[j + 1];
                u[j + 1] = temp;

                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
  cout << "\nEdges in Minimum Spanning Tree:\n";
  for(i = 0; i < m; i++)
    {
        a = u[i] - 1;
        b = v[i] - 1;
     while(parent[a] != a)
            a = parent[a];
     while(parent[b] != b)
            b = parent[b];
      if(a != b)
        {
    cout << u[i] << " - " << v[i]
                 << " : " << w[i] << endl;

            total = total + w[i];
            parent[a] = b;
            edges++;
        }
         if(edges == n - 1)
            break;
    }
    if(edges == n - 1)
        cout << "Minimum cost = " << total;
    else
        cout << "Minimum Spanning Tree is not possible";

    return 0;
}

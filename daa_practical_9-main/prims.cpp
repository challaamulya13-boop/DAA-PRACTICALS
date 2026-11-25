
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;
int cost[n][n];
int visited[n] = {0};
int i, j, a = 0, b = 0;
int min, total = 0, edges = 0;
cout << "Enter cost matrix:\n";
for(i = 0; i < n; i++)
    {
    for(j = 0; j < n; j++)
        {
    cin >> cost[i][j];
        }
    }
visited[0] = 1;
cout << "\nEdges in Minimum Spanning Tree:\n";
while(edges < n - 1)
    {
    min = 0;
   for(i = 0; i < n; i++)
        {
    if(visited[i] == 1)
            {
     for(j = 0; j < n; j++)
                {
         if(visited[j] == 0 && cost[i][j] != 0)
                    {
         if(min == 0 || cost[i][j] < min)
                        {
                min = cost[i][j];
                a = i;
                b = j;
                        }
                    }
                }
            }
        }

        if(min == 0)
        {
            cout << "Minimum Spanning Tree is not possible";
            return 0;
        }
          cout << a + 1 << " - " << b + 1
             << " : " << min << endl;

        total = total + min;
        visited[b] = 1;
        edges++;
    }
 cout << "Minimum cost = " << total;
  return 0;
}

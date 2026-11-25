#include <iostream>
using namespace std;
int graph[20][20];
int visited[20];
int n;
void DFS(int v)
{
    visited[v] = 1;
    cout << v << " ";
 for (int i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}
void BFS(int start)
{
    int queue[20];
    int front = 0, rear = 0;
  for (int i = 0; i < n; i++)
        visited[i] = 0;
   visited[start] = 1;
    queue[rear] = start;
    rear++;
     while (front < rear)
    {
        int v = queue[front];
        front++;
        cout << v << " ";
      for (int i = 0; i < n; i++)
        {
     if (graph[v][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear] = i;
                rear++;
            }
        }
    }
}

int main()
{
    int edges;
    int u, v;
    int start;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> edges;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }
   cout << "Enter edges:\n";
   for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    cout << "\nEnter starting vertex: ";
    cin >> start;
    for (int i = 0; i < n; i++)
        visited[i] = 0;
    cout << "\nDFS Traversal: ";
    DFS(start);
    cout << "\nBFS Traversal: ";
    BFS(start);
    return 0;
}

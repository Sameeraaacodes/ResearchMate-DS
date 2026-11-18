#include <iostream>
using namespace std;

const int SIZE = 5;

void DFS(int graph[SIZE][SIZE], bool visited[SIZE], int node)
{
    cout << char(node + 'A') << " ";

    visited[node] = true;// changes the current node as visited

    for (int i = 0; i < SIZE; i++)
    {
        // recursive call to visit connected nodes that have not been visited yet
        if (graph[node][i] == 1 && visited[i] == false)
        {
            DFS(graph, visited, i);
        }
    }
}

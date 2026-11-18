#include <iostream>
using namespace std;

const int SIZE = 5;

void DFS(int graph[SIZE][SIZE], bool visited[SIZE], int node);

int main()
{
    int graph[SIZE][SIZE] =
    {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };

    bool visited[SIZE] = { false, false, false, false, false };

    cout << "DFS Traversal: ";
    DFS(graph, visited, 0);

    return 0;
}
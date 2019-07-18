#include <iostream>

using namespace std;

void dij(int graph[][9], int source)
{
    int v = 9;
    int dist[v];
    for (int i = 0; i < v; i++)
    {
        dist[i] = 9999;
    }
    int visited[v] = {0};

    dist[source] = 0;
    
}

int main()
{
    int V = 9;
    int graph[V][V] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}};

    dij(graph, 0);

    return 0;
}

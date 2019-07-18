#include <bits/stdc++.h>
using namespace std;
int ar;
int hx = 0, hy = 0;
int ox = 100, oy = 100;
int anss = 0;
// int maxD = INT_MAX;
void somefun(int x[], int y[], int i, int distance, int count, int visited[], int *distsofar, int permute[5], int pp)
{
    if (count == 4)
    {
        permute[pp] = i;
        anss++;
        for(int j = 0; j < 5; j++)
            cout<<permute[j]<<" ";
        cout<<endl;
        distance += abs(ox - x[i]) + abs(oy - y[i]);
        *distsofar = min(*distsofar, distance);
        ar++;
        // if(maxD > distance)
        //     maxD = distance;
        return;
    }
    count++;
    visited[i] = 1;
    for (int j = 0; j < 5; j++)
    {
        if (visited[j] == 0)
        {
            distance += abs(x[j] - x[i]) + abs(y[j] - y[i]);
            permute[pp] = j;
            //if (distance <= *distsofar)
                somefun(x, y, j, distance, count, visited, distsofar, permute, pp + 1);
            distance -= abs(x[j] - x[i]) + abs(y[j] - y[i]);
        }
    }
    visited[i] = 0;
}

int main()
{

    int x[5] = {5, 7, 6, 52, 12};
    int y[5] = {5, 7, 6, 52, 12};
    int visited[5] = {0};
    int permute[5] = {0};
    int distsofar = 100000;
    ar = 0;

    int pp = 0;

    for (int i = 0; i < 5; i++)
    {
        int distance = 0;
        int count = 0;

        permute[pp] = i;

        distance += x[i] - hx + y[i] - hy;
        somefun(x, y, i, distance, count, visited, &distsofar, permute, pp+1);
    }
    // printf("%d", ar);
    cout << distsofar << "\n";

    cout<<anss<<endl;
}
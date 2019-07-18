// https: //www.hackerrank.com/contests/nitk-cp-league-contest1/challenges/game-of-arrays-3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " " << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
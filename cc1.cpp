// / https: //www.codechef.com/KQM92018/problems/QM9B
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
        int count = 0;
        for (int i = 1; i <= n/2; i++)
            count++;
        cout << count;
    }
    return 0;
}
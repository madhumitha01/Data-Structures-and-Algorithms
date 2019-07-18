#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        temp = 0;
        int prev = 0;
        int max = -1;
        for (int i = 0; i < n; i++)
        {
            temp = temp ^ a[i];
            if (i >= k - 1)
            {
                if (temp > max)
                {
                    max = temp;
                }
                temp = temp ^ a[i - k + 1];
            }
        }
        cout << max << endl;
    }
    return 0;
}

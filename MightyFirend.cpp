#include <bits/stdc++.h>
using namespace std;
int cust(int a, int b)
{
    return a > b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        sort(b.begin(), b.end(), cust);
        sort(c.begin(), c.end());
        long long int sumb = 0;
        long long int sumc = 0;
        for (int x : b)
        {
            sumb += x;
        }
        for (int x : c)
        {
            sumc += x;
        }
        if (sumc > sumb)
        {
            cout << "YES" << endl;
            break;
        }
        else
        {
            int flag = 0;
            for (int i = 0; i < k; i++)
            {
                sumb = sumb - b[i] + c[i];
                sumc = sumc + b[i] - c[i];
                if (sumc > sumb)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
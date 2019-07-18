#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int c = max(a, b);
    int d = min(a, b);
    if (d == 0)
    {
        return c;
    }
    else if (d == 1)
    {
        return 1;
    }
    return gcd(c % d, d);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int oneHain = 0;
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                oneHain++;
            }
        }
        int g = 0;
        for (int i = 0; i < n; i++)
        {
            g = gcd(g, a[i]);
        }
        int ans;
        if (g == 1)
        {
            ans = 0;
        }
        else{
            ans=-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
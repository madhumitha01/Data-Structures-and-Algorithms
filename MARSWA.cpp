#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll s1, s2, t1, t2;
        cin >> s1 >> s2 >> t1 >> t2;
        int x;
        cin >> x;
        if (t2 > x)
        {
            for (int i = t2; i > x; i--)
            {
                s2 = s2 / 2;
            }
        }
        else
        {
            for (int i = t2; i <x; i++)
            {
                s2 = s2 * 2;
            }
        }

        cout << s2 << endl;
    }
    return 0;
}
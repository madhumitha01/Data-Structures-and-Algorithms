#include <iostream>
using namespace std;
int main()
{
    freopen("leapfrog_ch_.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        string s;
        cin >> s;
        int b = 0, dot = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
                dot++;
            else if (s[i] == 'B')
                b++;
        }
        int ans = 0;
        if (((s.size() - 1) <= 2 * b) && (dot >= 1))
        {
            ans = 1;
        }
        else
        {
            ans = 0;
        }
        if ((b >= 2)&&(dot >= 1))
        {
            ans = 1;
        }

        if (ans)
        {
            cout << "Case #" << x + 1 << ": Y" << endl;
        }
        else
        {
            cout << "Case #" << x + 1 << ": N" << endl;
        }
    }
}
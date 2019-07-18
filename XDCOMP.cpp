#include <bits/stdc++.h>
using namespace std;

int fun(int a, int b) { return a > b; }

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> p;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            p.push_back(temp);
        }
        sort(p.begin(), p.end(), fun);
        int j = 2 * k;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int journey = p[i] / j;
            p[i] = p[i] % j;
            ans = ans + journey;
        }
        sort(p.begin(), p.end(), fun);
        int ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            int journey = p[i] / k;
            p[i] = p[i] % k;
            ans2 = ans2 + journey;
        }
        //here ans2/2
        int ans3 = 0;
        for (int i = 0; i < n; i++)
        {
            if (p[i] != 0)
                ans3++;
        }
        int final_ans = (ans + (ans2 + ans3) / 2) + ((ans2 + ans3) % 2 == 1 ? 1 : 0);
        cout << final_ans << endl;
    }
    return 0;
}
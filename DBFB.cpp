#include <bits/stdc++.h>
using namespace std;
long long int MOD = 1000 * 1000 * 1000 + 7;
int fibo[1000 * 100 + 1];
int fibona(int n)
{
    if (n < 1)
    {
        return 0;
    }
    if (fibo[n] != -1)
    {
        return fibo[n];
    }
    else if (n == 1)
    {
        fibo[1] = 1;
        return 1;
    }
    else if (n == 2)
    {
        fibo[2] = 1;
        return 1;
    }
    fibo[n] = (fibona(n - 1) + fibona(n - 2)) % MOD;
    return fibo[n];
}
int main()
{
    memset(fibo, -1, sizeof(fibo));
    fibo[0] = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        long long int suma = 0;
        long long int sumb = 0;
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            suma = (suma + temp) % MOD;
        }
        for (int i = 0; i < m; i++)
        {
            int temp;
            cin >> temp;
            sumb = (sumb + temp) % MOD;
        }
        int f = fibona(n - 2);
        int s = fibona(n - 1);
        if (n == 1)
            f = 1;
        f = (f * 1LL * m) % MOD;
        s = (s * 1LL * m) % MOD;
        long long int ans = ((f * 1LL * suma) % MOD + (s * 1LL * sumb) % MOD) % MOD;
        cout << ans << endl;
    }
    return 0;
}
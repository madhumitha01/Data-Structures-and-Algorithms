#include <bits/stdc++.h>

using namespace std;
long long int MOD = 1000 * 1000 * 1000 + 7;
int findallSum(string n, int a);
// Complete the substrings function below.
int substrings(string n)
{
    long long int sum = 0;
    for (int i = 1; i <= n.length(); i++)
    {
        sum = (sum + 1LL*findallSum(n, i))%MOD;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);
    cout << result << endl;

    return 0;
}

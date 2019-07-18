#include <bits/stdc++.h>

using namespace std;

int digitSum(string n, int k)
{
    long long int sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum += n[i] - '0';
        if (sum / 10 != 0)
        {
            int temp = sum / 10;
            int temp2 = sum % 10;
            sum = temp + temp2;
        }
    }
    int constS = sum;
    for (int i = 0; i < k - 1; i++)
    {
        sum += constS;
        if (sum / 10 != 0)
        {
            int temp = sum / 10;
            int temp2 = sum % 10;
            sum = temp + temp2;
        }
    }
    return sum;
}

int main()
{
    string n;
    int k;
    cin >> n >> k;
    int result = digitSum(n, k);
    cout << result << endl;
    return 0;
}

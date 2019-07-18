//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        int i, j;
        i = j = 0;
        int flag = 0;
        while (j < n)
        {

            if (sum < s)
            {
                sum += a[j];
                j++;
            }
            if (sum > s)
            {
                sum = sum - a[i];
                i++;
            }
            if (sum == s)
            {
                cout << i + 1 << " " << j << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d\n", -1);
    }
    return 0;
}
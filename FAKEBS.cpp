#include <bits/stdc++.h>
using namespace std;
#define mystore struct store
struct store
{
    int val;
    int index;
};
int myfun(mystore a, mystore b)
{
    return a.val < b.val;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n + 1];
        mystore iv[n + 1];
        int ind = 1;
        iv[0].val = -1;
        iv[0].index = -1;
        int max, min;
        max = -1;
        min = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            cin >> iv[i].val;
            a[i] = iv[i].val;
            if (a[i] > max)
                max = a[i];
            if (a[i] < min)
                min = a[i];
            iv[i].index = ind;
            ind++;
        }
        sort(iv + 1, iv + n + 1, myfun);
        // for (int i = 0; i < n + 1; i++)
        // {
        //     cout << iv[i].val << " " << iv[i].index << endl;
        // }

        for (int i = 0; i < q; i++)
        {
            int query;
            cin >> query;
            int low, high, mid;
            low = 1;
            high = n;
            while (low <= high)
            {
                mid = (low + high) / 2;
                // cout << mid << " mid" << endl;
                if (iv[mid].val == query)
                {
                    // cout<<mid<<" mid"<<endl;
                    break;
                }
                else if (iv[mid].val < query)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            int iiw = iv[mid].index;
            // cout<<"query at "<<iiw<<endl;
            low = 1;
            high = n;
            int swaps = 0;
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (a[mid] == query)
                {
                    break;
                }
                else if (a[mid] < query)
                {
                    if (mid > iiw)
                    {
                        if (query == max)
                        {
                            swaps = -1;
                            break;
                        }
                        high = mid - 1;
                        swaps++;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
                else //if a[mid] > query)
                {
                    if (mid < iiw)
                    {
                        if (query == min)
                        {
                            swaps = -1;
                            break;
                        }
                        low = mid + 1;
                        swaps++;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
            }
            cout << swaps << endl;
        }
    }
    return 0;
}
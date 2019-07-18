#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll temp;
        ll cherry, hazr;
        cherry = hazr = 0;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        make_heap(a.begin(), a.end());
        ll x = 1;
        ll top = -1;
        while ((a.size() != 0) && (a.front() != 0))
        {
            top = a.front();
            int count = 0;
            while ((a.front() == top) && (a.size() != 0))
            {
                count++;
                pop_heap(a.begin(), a.end());
                a.pop_back();
            }
            if (count > 1)
            {
                if (x % 2 == 1)
                {
                    cherry += 0;
                }
                else
                {
                    hazr += 0;
                }
            }
            else if (count == 1)
            {
                if (x % 2 == 1)
                {
                    cherry += top;
                    top = top / 2;
                    a.push_back(top);
                    push_heap(a.begin(), a.end());
                }
                else
                {
                    hazr += top;
                    top = top / 2;
                    a.push_back(top);
                    push_heap(a.begin(), a.end());
                }
            }
            x++;
        }
        if (cherry > hazr)
        {
            cout << "Cherry " << cherry - hazr << endl;
        }
        else
        {
            cout << "Hazardous\n";
        }
    }
    return 0;
}
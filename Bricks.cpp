#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    int t;
    int w;
} store;

int myfun(store a, store b)
{
    return a.w > b.w;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        store bricks[n];
        for (int i = 0; i < n; i++)
        {
            cin >> bricks[i].t >> bricks[i].w;
        }
        sort(bricks, bricks + n, myfun);
        int sumw = 0;
        int sumt = 0;
        int onet = 0;
        int twot = 0;
        for (int i = 0; i < n; i++)
        {
            sumt += bricks[i].t;
            sumw += bricks[i].w;
            if (bricks[i].t == 1)
                onet++;
            else if (bricks[i].t == 2)
                twot++;
        }
        int someT = 0;
        int x;
        for (x = n - 1; x >= 0; x--)
        {
            if (bricks[x].t == 1)
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            someT = someT + bricks[i].t;
            sumw = sumw - bricks[i].w;
            if (someT >= sumw)
            {
                int y = (someT - bricks[i].t + bricks[x].t);
                if ((y >= (sumw + bricks[i].w - bricks[x].w)) && (y < someT) && (x>i))
                {
                    cout << y << endl;
                    break;
                }
                else
                {
                    cout << someT << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
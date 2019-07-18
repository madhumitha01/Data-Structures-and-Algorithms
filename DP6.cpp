    #include <bits/stdc++.h>
    //-1 0f 1t
    using namespace std;
    int store[1001][1001];
    int abbreviation(string a, string b, int n, int m)
    {
        if (store[n][m] != -1)
            return store[n][m];
        if (n != 0 && m == 0)
        {
            int flag = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] <= 'Z')
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                store[n][m] = 0;
            else
                store[n][m] = 1;
            return store[n][m];
        }
        else if (n == 0 && m != 0)
        {
            store[n][m] = 0;
            return store[n][m];
        }
        else if(n==0&&m==0){
            return 1;
        }
        if (a[n - 1] == b[m - 1])
        {
            store[n][m] = abbreviation(a, b, n - 1, m - 1);
            return store[n][m];
        }
        else if (a[n - 1] - b[m - 1] == 'a' - 'A')
        {
            store[n][m] = abbreviation(a, b, n - 1, m - 1) || abbreviation(a, b, n - 1, m);
            return store[n][m];
        }
        if (a[n - 1] <= 'Z')
        {
            store[n][m] = 0;
            return 0;
        }
        store[n][m] = abbreviation(a, b, n - 1, m);
        return store[n][m];
    }

    int main()
    {
        int q;
        cin >> q;
        for (int a0 = 0; a0 < q; a0++)
        {
            string a;
            cin >> a;
            string b;
            cin >> b;
            memset(store, -1, sizeof(store));
            int result = abbreviation(a, b, a.length(), b.length());

            if (result == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        return 0;
    }

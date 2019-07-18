// https: //www.hackerrank.com/contests/nitk-cp-league-contest1/challenges/a-christmas-list
#include <bits/stdc++.h>
using namespace std;
struct custom
{
    char a[100];
    int count;
    int used;
};
#define cs struct custom
bool acompare(cs a, cs b)
{
    return strcmp(a.a, b.a);
}

int main()
{
    int n;
    cin >> n;
    cs store[n];
    for (int i = 0; i < n; i++)
    {
        store[i].count = 0;
    }
    getchar();
    for (int i = 0; i < n; i++)
    {
        char x[100];
        scanf("%[^\n]", x);
        getchar();
        printf("S is:%s\n\n", x);
        int flag = 0;

        for (int j = 0; j < n; j++)
        {
            if (strcmp(x, store[j].a) == 0)
            {
                store[j].count++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (store[i].used == 0)
                {
                    store[i].used = 1;
                    store[i].count++;
                    strcpy(store[i].a, x);
                    break;
                }
            }
        }
    }
    sort(store, store + n, acompare);
    for (int i = 0; i < n; i++)
    {
        cout << store[i].a << " " << store[i].count << endl;
    }
    return 0;
}
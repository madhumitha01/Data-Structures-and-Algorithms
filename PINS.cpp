#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = n - (n + 1) / 2;
        cout<<"1"<<" "<<"1";
        for(int i=0;i<x;i++){
            cout<<"0";
        }
        cout<<endl;
        
    }
    return 0;
}
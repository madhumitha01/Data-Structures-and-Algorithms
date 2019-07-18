#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, temp;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            a.push_back(temp);
        }
        float mean;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        mean = sum *1.0 / n;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == mean) {
                flag = 1;
                cout <<i+1 << endl;
                break;
            }
        }
        if (!flag) {
            cout << "Impossible\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string k;
        cin >> k;
        int ans = 0;

        vector<int> vec;
        ll mod = 0;

        // Do step by step division
        for (int i = 0; i < k.size(); i++) {
            int digit = k[i] - '0';

            // Update modulo by concatenating
            // current digit.
            mod = mod * 10 + digit;

            // Update quotient
            int quo = mod / n;
            vec.push_back(quo);

            // Update mod for next iteration.
            mod = mod % n;
        }
        ll r = mod;
        if ( r == 0) {
            cout << "0\n";
            continue;
        } else {
            if (r == n / 2) {
                ans = 2 * r - 1;
            } else {
                ans = min(2 * r, 2 * (n - r));
            }
            cout << ans << "\n";
        }
    }
}
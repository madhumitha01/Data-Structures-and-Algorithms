#include <bits/stdc++.h>

using namespace std;

int findTotalWays(vector<int> arr, int i, int k) {
    if (i >= arr.size() && k != 0)
        return 0;
    if (k == 0)
        return 1;
    return findTotalWays(arr, i + 1, k)
           + findTotalWays(arr, i + 1, k - arr[i]);
}

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a;
        int tot = 0;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            a.push_back(t);
            tot += t;
        }
        int ans = 0;
        int x = tot / m;
        int y = tot % m;
        for (int i = 1; i <= (x + (y == 0 ? -1 : 0)); i++)
            ans += findTotalWays(a, 0, m * i);
        cout << ans << endl;
        //sub the no of repetitions

    }
    return 0;

}
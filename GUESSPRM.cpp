#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int t;
    cin >> t;
    while (t--) {
        cout << "1 31623\n";
        // 999999937
        int m1;
        cin >> m1;
        if (m1 == -1) {
            exit(0);
        }
        int some = 31623 * 31623 - m1;
        vector<int> fact;
        for (int i = 2; i < sqrt(some) + 1; i++) {
            if (!some % i) {
                fact.push_back(i);
            }
        }
        if(fact.size()>2){
            cout<<"2 ";
        }

    }
    return 0;
}

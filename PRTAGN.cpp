#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll countone(ll n) {
    ll count = 0;
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

void printset(unordered_set<ll> s) {
    cout << "The set is:";
    for (auto i = s.begin(); i != s.end(); i++) {
        printf("%lld ", *i);
    }
    cout << endl
         << endl
         << endl
         << endl
         << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        unordered_set<ll> s;
        ll q;
        cin >> q;
        ll E = 0, O = 0;
        ll e;
        while (q--) {
            cin >> e;
            bool x = s.insert(e).second;
            if (x == true) {
                if (countone(e) % 2 == 0) {
                    E++;
                } else {
                    O++;
                }
                unordered_set<ll>::iterator i;
                int si = s.size();
                int z;
                vector<ll> temp;
                for (i = s.begin(); i != s.end(); i++) {
                    temp.push_back(*i);
                }
                for (auto i = temp.begin(); i != temp.end(); i++) {
                    if ((*i) != e) {
                        if (s.insert(e ^ (*i)).second == true) {
                            if (countone(e ^ (*i)) % 2 == 0) {
                                E++;
                            } else {
                                O++;
                            }
                        }
                    }
                }
            }
            cout << E << " " << O << endl;
            // printset(s);
        }
    }
    return 0;
}

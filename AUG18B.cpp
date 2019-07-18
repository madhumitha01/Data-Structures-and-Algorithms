#include<bits/stdc++.h>

using namespace std;
typedef struct {
    int diff;
    int no;
} store;

typedef struct {
    int diff;
    int index;
} mapper;

int myfun(store a, store b) {
    return a.diff < b.diff;
}

int myfun2(mapper a, mapper b) {
    if (a.diff != b.diff) {
        return a.diff < b.diff;
    }
    return a.index < b.index;

}

int main() {
    int p, s;
    cin >> p >> s;
    mapper di[p];
    for (int k = 0; k < p; k++) {
        store temp[s];
        for (int i = 0; i < s; i++) {
            cin >> temp[i].diff;
        }
        for (int i = 0; i < s; i++) {
            cin >> temp[i].no;
        }
        sort(temp, temp + s, myfun);
        int count = 0;
        for (int i = 0; i < s - 1; i++) {
            if (temp[i].no > temp[i + 1].no)
                count++;
        }
        di[k].diff = count;
        di[k].index = k;

    }
    sort(di, di + p, myfun2);
    for (int i = 0; i < p; i++) {
        cout << di[i].index + 1 << "\n";
    }

    return 0;
}
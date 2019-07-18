//
// Created by DHP on 30-01-2018.
//

#include <bits/stdc++.h>

using namespace std;

int binary_search(int a[], int key, int low, int high) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) {
            return mid;
        } else if (a[mid] > key) {
            return binary_search(a, key, low, mid - 1);
        } else
            return binary_search(a, key, mid + 1, high);
    } else
        return -1;
}

int main() {
    int a[] = {1, 3, 5, 8, 9, 10, 11, 15, 16};
    cout << binary_search(a, 16, 0, sizeof(a) / sizeof(a[0]) - 1);
    return 0;
}
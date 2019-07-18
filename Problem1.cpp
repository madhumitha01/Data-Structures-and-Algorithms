//
// Created by DHP on 30-01-2018.
//

#include <bits/stdc++.h>

using namespace std;

int findIndex(int a[], int low, int high) {
    int mid = (low + high) / 2;
    if (low <= high) {
        if (a[mid] == mid) {
            return mid;
        } else if (a[mid] < mid) {
            return findIndex(a, mid + 1, high);
        } else
            return findIndex(a, low, mid - 1);
    }
    return -1;
}

int main() {
    printf("Enter the value of n:");
    int n;
    cin >> n;
    int a[n];
    printf("Enter the numbers:");
    for (int i = 0; i < n; i++)cin >> a[i];
    cout << findIndex(a, 0, n - 1);
    return 0;
}
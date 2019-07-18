//
// Created by Doraemon on 30-01-2018.
//
#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, char from, char to, char help) {
    if(n>=1){
        hanoi(n-1,from,help,to);
        printf("move %d from %c to %c\n",n,from,to);
        hanoi(n-1,help,to,from);
    }
}

int main() {
    printf("Enter the value of n:");
    int n;
    cin >> n;
    hanoi(n, 'a', 'c', 'b');
    return 0;
}


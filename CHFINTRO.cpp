#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r;
    cin>>n>>r;
    while(n--){
        int rating;
        cin>>rating;
        if(rating>=r)
            cout<<"Good boi\n";
        else 
            cout<<"Bad boi\n";
    }
    return 0;
}
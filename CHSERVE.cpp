#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int x=(a+b)/k;
        if(x%2==0)
            cout<<"CHEF\n";
        else
            cout<<"COOK\n";
        
    }
    return 0;
}
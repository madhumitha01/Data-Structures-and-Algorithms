#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        for(int i=0;i<s;i++){
            int a,b;
            cin>>a>>b;
            if(x==a){
                x=b;
            } else if(x==b){
                x=a;
            }
        }
        cout<<x<<"\n";
    }
    return 0;
}
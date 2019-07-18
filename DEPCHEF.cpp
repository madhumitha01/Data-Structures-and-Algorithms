#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+2];
        int d[n+2];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            cin>>d[i];
        }
        a[0]=a[n];
        d[0]=d[n];
        a[n+1]=a[1];
        d[n+1]=d[1];
        int large=-1;
        for(int i=1;i<n+1;i++){
            if(d[i]>a[i-1]+a[i+1]){
                if(d[i]>large){
                    large=d[i];
                }
            }
        }
        cout<<large<<"\n";
    }
    return 0;
}
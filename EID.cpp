#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int min=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(abs(a[i+1]-a[i])<min)
                min=abs(a[i+1]-a[i]);
        }
        cout<<min<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        long long int ans=0;
        for(int i=1;i<n;i++){
            ans+=a[i]-1;
        }
        ans+=a[0];
        cout<<ans<<"\n";
    }
    return 0;
}
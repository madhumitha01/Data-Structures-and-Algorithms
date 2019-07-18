#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>a;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                count++;
            } else {
                a.push_back(count);
                count=0;
            }
        }
        if(a.size()==0){
            cout<<(count+1)/2<<"\n";
            continue;
        }
        if(count!=0)
            a.push_back(count);
        
        int ans=0;
        for(int i=1;i<a.size()-1;i++){
            ans+=(a[i]-1)/2;
        }
        ans+=a[0]/2;
        if(a.size()>=2)
            ans+=a[a.size()-1]/2;
        cout<<ans<<"\n";

    }
    return 0;
}
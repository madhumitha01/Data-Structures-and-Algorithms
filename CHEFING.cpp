#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string temp;
        int count[n][255]={0};
       
        for(int i=0;i<n;i++){
            cin>>temp;
            for(int j=0;j<temp.length();j++){
                count[i][temp[j]]++;
            }
        }
        int ans=0;
        for(int i=0;i<255;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(count[j][i]>0){
                    c++;
                }
            }
            if(c==n){
                ans++;
            }
        }
        cout<<ans<<"\n";

        
        
    }
    return 0;
}
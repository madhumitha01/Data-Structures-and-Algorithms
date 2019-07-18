#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int r[n+1]={0};
        int c[n+1]={0};
        while(k--){
            int row,col;
            cin>>row>>col;
            r[row]=1;
            c[col]=1;
        }
        vector<int>ansr;
        vector<int>ansc;
        int count=-1;
        for(int i=0;i<n+1;i++){
            if(r[i]==0){
                count++;
                ansr.push_back(i);
            }
            if(c[i]==0){
                ansc.push_back(i);
            }
        }
        cout<<count<<" ";
        sort(ansr.begin(),ansr.end());
        sort(ansc.begin(),ansc.end());
        for(int i=1;i<ansr.size();i++){
            cout<<ansr[i]<<" "<<ansc[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
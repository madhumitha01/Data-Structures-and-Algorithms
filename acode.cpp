#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int x;
    int y;
} point;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        point store[n];
        for(int i=0;i<n;i++){
            cin>>store[i].x;
            cin>>store[i].y;
        }
        vector<int>kv;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            kv.push_back(temp);
        }
        vector<int>values;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum=sum+( abs(store[i].x-store[j].x)+abs(store[i].y-store[j].y) );
            }
            values.push_back(sum);
            sum=0;
        }
        sort(values.begin(),values.end());
        sort(kv.begin(),kv.end());
        long long int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+ values[i]*kv[n-1-i];
        }
        cout<<ans<<endl;

    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int pos=0;
        int temp;
        int neg=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp>0)
                pos++;
            else
                neg++;
        }
        int a=min(pos,neg);
        int b=max(pos,neg);
        if(a==0)
            a=b;
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}
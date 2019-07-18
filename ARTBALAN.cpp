#include<bits/stdc++.h>
using namespace std;
int myfun(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]-'A']++;
        }
        int t=0;
        sort(count,count+26,myfun);
        for(int i=0;i<25;i++){
            if(count[i]!=count[i+1]&&(count[i]!=0&&count[i+1]!=0)){
                t=1;
            }
        }
        if(t==0){
            cout<<"0\n";
            continue;
        }
        int ans=INT_MAX;
        for(int i=1;i<=26;i++){
            if(s.length()%i==0){
                int x=0;
                int some=s.length()/i;
                int temp=0;
                for(int j=0;j<i;j++){
                    if(some-count[j]>=0)
                        temp=temp+some-count[j];
                }
                if(temp!=0&&temp<ans){
                    ans=temp;
                }
            }
        }
        if(ans==INT_MAX)
            ans=0;
        cout<<ans<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        char d;
        cin>>n;
        cin>>d;
        int s=n.size();
        char mini=127;
        for(int i=0;i<s;i++){
            if(d<=n[i]){
                n[i]='a';
            }
            if(n[i]<mini){
                mini=n[i];
                // cout<<"this is mini:"<<mini<<endl;
            }
        }
        // cout<<"this is n:"<<n<<endl;
        // cout<<"HELLO2\n";
        string x="";
        int count=0;
        for(int i=0;i<s;i++){
            if(n[i]!='a')
                x=x+n[i];
            else 
                count++;
        }
        // cout<<"HELLO\n";

        for(int i=0;i<count;i++){
            x=x+d;
            // cout<<"hey";
        }
        // cout<<"x:"<<x<<endl;
        // cout<<x<<endl;
        int li=0;
        for(int i=0;i<s;i++){
            if(x[i]==mini){
                li=i;
                break;
            }
        }
        string ans="";
        // cout<<"this is mini:"<<mini<<endl;
        // cout<<"this is li:"<<li<<endl;
        // cout<<"this is x:"<<x<<endl;

        for(int i=li;i<s;i++){
            ans=ans+x[i];
        }
        // cout<<"this is ans:"<<ans<<endl;
        for(int i=0;i<li;i++){
            ans=ans+d;
        }
        cout<<ans<<endl;
        sort(ans.begin(),ans.end());
        

    }
    return 0;
}
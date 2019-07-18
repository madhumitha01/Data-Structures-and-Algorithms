#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;
    getline(cin,s);
    while(t--){
        getline(cin,s);
        string x=" not ";
        if(s=="not"){
            cout<<"Real Fancy\n";
            continue;
        }
        if(s.length()>=4){
            if(s[0]=='n'&&s[1]=='o'&&s[2]=='t'&&s[3]==' '){
                cout<<"Real Fancy\n";
                continue;
            }else if(s[s.length()-1]=='t'&&s[s.length()-2]=='o'&&s[s.length()-3]=='n'&&s[s.length()-4==' ']){
                cout<<"Real Fancy\n";
                continue;
            }
        }
        if(s.find(x) != string::npos){
            cout<<"Real Fancy\n";
        } else {
            cout<<"regularly fancy\n";
        }
    }
    return 0;
}
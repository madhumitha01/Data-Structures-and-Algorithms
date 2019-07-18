#include<bits/stdc++.h>
using namespace std;
int retDay(string a);
int main(){
    int t;
    cin>>t;
    string day[]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday",
                    "monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    while(t--){
        string s,e;
        int l,r;
        cin>>s>>e;
        cin>>l>>r;
        int i,j;
        for(i=0;i<14;i++){
            if(day[i]==s) break;
        }
        for(j=i;j<14;j++){
            if(day[j]==e)break;
        }
        int days=j-i+1;
        while(days<l)
            days+=7;
        
        if(days+7>=l&&days+7<=r)
            cout<<"many\n";
        else if(days>=l&&days<=r){
            cout<<days<<"\n";
        }else
            cout<<"impossible\n";
           
        
    }
    return 0;
}
int retDay(string a){
    if(a=="monday")
        return 1;
    if(a=="tuesday")
        return 2;
    if(a=="wednesday")
        return 3;
    if(a=="thursday")
        return 4;
    if(a=="friday")
        return 5;
    if(a=="saturday")
        return 6;
    if(a=="sunday")
        return 7;
    return -1;   
}
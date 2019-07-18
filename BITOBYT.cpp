#include<bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int x){
    if(x<=0){
        return 1;
    }
    long long int temp=power(a,x/2);
    if(x%2)
        return temp*temp*a;
    return temp*temp;
}
int main(){
    unsigned long long int q;
    cin>>q;
    while(q--){
        unsigned long long int x;
        cin>>x;
        x-=1;
        // cout<<power(3,1);
        // cout<<power(3,2);
        // cout<<power(3,3);
        unsigned long long int p=x/26;
        unsigned long long int remainder=x%26;
        unsigned long long int bit=power(2,p);
        if(remainder<2){
            cout<<bit<<" 0 0\n";
        }else if(remainder<10){
            cout<<"0 "<<bit<<" 0\n";
        }else{
            cout<<"0 0 "<<bit<<"\n";
        }
        
    }
    return 0;
}
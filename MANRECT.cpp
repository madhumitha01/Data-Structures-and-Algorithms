#include<bits/stdc++.h>
using namespace std;
#define alpha 1000000000
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int k1,k2,k3,k4;
        cout<<"Q 0 0\n"<<flush;
        cin>>k1;
        cout<<"Q 1000000000 1000000000\n"<<flush;
        cin>>k2;
        cout<<"Q 1000000000 0\n"<<flush;
        cin>>k3;
        cout<<"Q 0 1000000000\n"<<flush;
        cin>>k4;
        

        long long int a,b,c,d;
        cout<<"Q 0 "<<(k1-k4+alpha)/2<<"\n"<<flush;
        cin>>a;
        b=k1-a;
        d=alpha*1LL+a-k4;
        c=2*alpha*1LL-d-k2;
        cout<<"A "<<a<<" "<<b<<" "<<c<<" "<<d<<"\n"<<flush;
        int temp;
        cin>>temp;
        

    }
    return 0;
}
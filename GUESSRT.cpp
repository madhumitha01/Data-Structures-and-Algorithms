#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
long long int power(long long int a,long long int x){
    if(x<=0){
        return 1;
    }
    long long int temp=power(a,x/2);
    if(x%2)
        return ((((temp*temp)%MOD)*a)%MOD);
    return (temp*temp)%MOD;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k,m;
        cin>>n>>k>>m;
        long long int x=(m+1)/2;
        long long int nx = power(n,x);
        long long int nm1x = power(n-1,x);
        long long int a=nx;
        long long int b=nm1x;
        long long int c=nx;
        long long int ans = ((a - b + MOD)%MOD*power(c,MOD-2))%MOD;
        if(m%2){
            cout<<ans<<"\n"; 
        }else{
            long long int p2n=power(n-1,x);
            long long int p2d=power(n,x);
            p2d=(p2d*(n+k))%MOD;
            ans=(ans+ (p2n*(power(p2d,MOD-2)) %MOD))%MOD ;
            cout<<ans<<"\n";
        }       
    }
    return 0;
}
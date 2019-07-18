#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    if(b==0){
        return a;
    }
    return hcf(b, a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,a,b,k;
        cin>>n>>a>>b>>k;
        long long int lcm;
        int h=hcf(max(a,b),min(a,b));
        long long int l=a*b*1LL;
        l=l/h;
        int n1=n/a;
        int n2=n/b;
        int n3=n/l;
        int k1=n1+n2-2*n3;
        // printf("%d : %d : %d : %d\n",l,n1,n2,k1);
        if(k1>=k)
            cout<<"Win\n";
        else 
            cout<<"Lose\n";
    }
    return 0;
}
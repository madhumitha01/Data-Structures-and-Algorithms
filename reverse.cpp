// To print the reverse of a string S[1..n].
#include<bits/stdc++.h>
    using namespace std;
void reverse(string a,int l,int r){
    if(l==r){
        printf("%c",a[l]);
        return;
    }
    printf("%c",a[r]);
    reverse(a,0,r-1);
}
int main(){
    cout<<"Enter a string:";
    string a;
    cin>>a;
    reverse(a,0,a.length()-1);
    cout<<endl;
}
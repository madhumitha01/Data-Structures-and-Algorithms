// To print the length of the longest common subsequence of two arbitrary arrays  
// A[1 .. m] and B[1 .. n]. A common subsequence of A and B is both a subsequence of
// A and a subsequence of B. (A subsequence is a sequence that can be derived from 
// another sequence by deleting some elements without changing the order of the remaining 
// elements. For e.g. for the sequence <a,b,c,d,e,f>,  <a,c,e> and <b,c,f> are two possible 
// subsequences.)
#include<bits/stdc++.h>
using namespace std;
int LCS(char *a,int n,char *b,int m){
    if(m==0||n==0)
        return 0;
    else if(a[n-1]==b[m-1])
        return 1+LCS(a,n-1,b,m-1);
    
    return max(LCS(a,n-1,b,m),LCS(a,n,b,m-1));
    
}
int main(){
    char a[100];
    char b[100];
    cout<<"Enter string :";
    scanf("%s",a);

    cout<<"Enter string :";
    scanf("%s",b);
    int len=LCS(a,strlen(a),b,strlen(b));
    cout<<"Len is :"<<len<<endl;
    return 0;
}
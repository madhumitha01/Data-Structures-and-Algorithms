// To print all possible permutations of a string S[1..n].
#include<bits/stdc++.h>
    using namespace std;
void swap(char *a,char*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void permute(char *a,int l,int r){
    int i;
    if(l==r){
        printf("%s\n",a);
        return;
    }
    for(i=l;i<=r;i++){
        swap(a+l,a+i);
        permute(a,l+1,r);
        swap(a+l,a+i);
    }
}
int main(){
    printf("Enter a string:");
    char a[100];
    scanf("%s",a);
    printf("The permutations are:\n");
    permute(a,0,strlen(a)-1);
}
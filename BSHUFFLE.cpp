#include<bits/stdc++.h>
using namespace std;
void swap(int a[],int i,int j){
    // a[i]=a[i]^a[j];
    // a[j]=a[i]^a[j];
    // a[i]=a[i]^a[j];
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main(){
    int n;
    cin>>n;
    n=4;
    int a[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            for(int k=0;k<4;k++){
                for(int l=0;l<4;l++){
                    swap(a,i,0);
                    swap(a,j,1);
                    swap(a,k,2);
                    swap(a,l,3);
                    
                    printf("%d %d %d %d :: %d %d %d %d\n",i+1,j+1,k+1,l+1,a[0],a[1],a[2],a[3]);
                    a[0]=1;a[1]=2;a[2]=3;a[3]=4;
                    
                }
            }
        }
    }
    return 0;
}
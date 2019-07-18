#include<bits/stdc++.h>
using namespace std;

int merge(int a[],int low,int mid,int high){
    int n1,n2;
    n1=mid-low+1;
    n2=high-mid;
    int temp1[n1];
    int temp2[n2];

    for(int i=0;i<n1;i++){
        temp1[i]=a[low+i];
    }
    for(int i=0;i<n2;i++){
        temp2[i]=a[mid+i+1];
    }
    
}

int count_inversions(int a[],int low,int high){
    int mid=low+(high-low)/2;
    int left=count_inversions(a,low,mid);
    int right=count_inversions(a,mid+1,high);
    int m=merge(a,low,mid,high);
    return left+right+m;
}


int main(){
    printf("Enter the number of elements of the array:");
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    
    return 0;
}
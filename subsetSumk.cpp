/* To print a subset of a set of integers S whose sum is equal to a given integer k. 
For e.g. if S = {­3,  4, ­10, 8, 20} and k = 14, print {4, ­10, 20}. Print NIL if no such 
subset exists.
 */
#include<bits/stdc++.h> 
using namespace std;
bool isSubset(int a[],int sum,int n){
    if(sum==0){
        return true;
    }
    else if(sum!=0&&n==0)
        return false;
    int choice1=isSubset(a,sum-a[n-1],n-1);
    int choice2=isSubset(a,sum,n-1);
    if(choice1){
        printf("%d ",a[n-1]);
    }
    return choice1||choice2;
    
}
int main(){
    cout<<"Enter the number of elements:";
    int n;cin>>n;
    cout<<"Enter the numbers:\n";
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cout<<"Enter the sum:";
    cin>>sum;
    if(!isSubset(a,sum,n)){
        cout<<"NIL";
    }
}
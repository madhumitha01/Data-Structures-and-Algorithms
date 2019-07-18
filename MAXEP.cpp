#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    


   int first = 1;
   int last = 150000;
   int middle = (first+last)/2;
   int ans;
 
   while (first <= last) {
        int a,b;
        b=middle;
        a=1;
        cout<<a<<" "<<b<<"\n";
        int res;
        cin>>res;
        if(res==0){
            first=middle+1;
            ans=middle;
        }else if(res==1){
            cout<<"2\n";
            last=middle-1;
        }else {
            cout<<"-1 code\n";
        }

        middle = (first + last)/2;
   }
   cout<<ans;





    return 0;
}
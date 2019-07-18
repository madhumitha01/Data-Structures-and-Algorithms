#include<bits/stdc++.h>
using namespace std;
void debug(int no){
    // printf("hello %d\n",no);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        vector<int>b;
        int temp;
        int isno=0;
        for(int i=0;i<n;i++){
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<n;i++){
            cin>>temp;
            b.push_back(temp);
        }
        int a1=a[0];
        int an=a[n-1];
        int b1=b[0];
        int bn=b[n-1];
        if(a1!=0||bn!=0) {
            isno=1;
        }
        else if(an!=b1) {
            isno=1;
        }
        else {
            debug(1);
            for(int i=1;i<n;i++){
                if(a[i]==0){
                    isno=1;
                    break; 
                }
            }
            debug(2);
            if(!isno)
            for(int i=0;i<n-1;i++){
                if(b[i]==0){
                    isno=1;
                    break;
                }
            }
            debug(3);
            if(!isno)
            for(int i=0;i<n;i++){
                if(a[i]+b[i]<an){
                    isno=1;
                    break;
                }
            }
            debug(4);
            if(!isno)
            for(int i=0;i<n;i++){
                if(an+b[i]<a[i]){
                    isno=1;
                    break;
                }
            }
            debug(5);
            if(!isno)
            for(int i=0;i<n;i++){
                if(b1+a[i]<b[i]){
                    isno=1;
                    break;
                }
            }
            
        }
        if(isno){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }

    }
    return 0;
}
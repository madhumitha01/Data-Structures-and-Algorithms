#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,x,y,z;
        cin>>n>>q;
        long long int maxa= -1;
        int height[n+1]= {0};
        while(q--)
        {  
            cin>>x>>y>>z;
            if(x==1)
            {
                int len=z;
                int initial=y;
                int final= initial+len;
                int something=max(height[final], height[initial-1]);
                for(int i=initial;i<final;i++){
                    if(height[i]>something){
                        something=height[i];
                    }
                }
                for(int i=initial;i<final;i++){
                    height[i]=something+len;
                }
                for(int i=0;i<n;i++)
                    printf("%d ",height[i]);
            }
            if(x==0)
            {   
                maxa=0;
                for(int i=y;i<=z;i++){
                    if(height[i]>maxa)
                        maxa=height[i];

                }
                cout<<maxa<<endl;
            }
        }


    }
    return 0;
}
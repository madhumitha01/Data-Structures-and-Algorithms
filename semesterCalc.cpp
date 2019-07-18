#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int no;
    vector<int>a;
}node;
int main(){
    printf("Enter the number of vertices:");
    int v;
    scanf("%d",&v);
    node ver[v];
    printf("Enter the number of edges:");
    int e;cin>>e;
    for(int i=0;i<e;i++){
        int from,to;
        cin>>from>>to;
        ver[to].a.push_back(from);
        ver[to].no+=1;
    }
}
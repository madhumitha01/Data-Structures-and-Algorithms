#include<bits/stdc++.h>
using namespace std;
vector<int>store;
vector<vector<int> >A;
vector<vector<int> >B;
void storeaArrA(vector<int>a, int n) { 
    for (int i=0; i<a.size(); i++) 
        store.push_back(a[i]);
    A.push_back(store);
    store.clear();  
} 
void storeaArrB(vector<int>a, int n) { 
    for (int i=0; i<a.size(); i++) 
        store.push_back(a[i]);
    B.push_back(store);
    store.clear();  
} 
void heapPermutationA(vector<int>a, int size, int n)  { 
    if (size == 1) { 
        // for (int i=0; i<n; i++) 
        //     cout << ":"<< a[i] << ":"; 
        storeaArrA(a, n); 
        return; 
    } 
    for (int i=0; i<size; i++) { 
        heapPermutationA(a,size-1,n); 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
        else
            swap(a[i], a[size-1]); 
    } 
} 
void heapPermutationB(vector<int>a, int size, int n)  { 
    if (size == 1) { 
        // for (int i=0; i<n; i++) 
        //     cout << ":"<< a[i] << ":"; 
        storeaArrB(a, n); 
        return; 
    } 
    for (int i=0; i<size; i++) { 
        heapPermutationB(a,size-1,n); 
        if (size%2==1) 
            swap(a[0], a[size-1]); 
        else
            swap(a[i], a[size-1]); 
    } 
} 
int getValue(vector<int>a){
    int x=0;
    for(int i=0;i<a.size();i++){
        x=x+a[i];
        x=x*10;
    }
    x=x/10;
    return x;
}
  
// Driver code 
int main() { 
    int t;
    cin>>t;
    while(t--) {
        int n,c;
        string a,b;
        cin>>n>>a>>b>>c;
        vector<int>splitA;
        vector<int>splitB;
        // cout<<"A:"<<a<<"B:"<<b<<endl;
        for(int i=0;i<a.size();i++){
            splitA.push_back((a[i]-'0'));
        }
        for(int i=0;i<b.size();i++){
            splitB.push_back((b[i]-'0'));
        }
        heapPermutationA(splitA, splitA.size(), splitA.size()); 
        heapPermutationB(splitB, splitB.size(), splitB.size());
        int flag=0;
        for(int i=0;i<A.size();i++){
            for(int j=0;j<B.size();j++){
                if(getValue(A[i])+getValue(B[i])==c){
                    printf("YES\n");
                    flag=1;
                    break;
                }
                if(flag)
                    break;
            }
        }
        if(flag==0){
            printf("NO\n");
        }
        //  cout<<"heyA\n";
        // for(int i=0;i<A.size();i++){
        //     for(int j=0;j<A[i].size();j++){
        //         // cout<<":"<<A[i][j]<<":";
        //     }
        //     printf("\n");
        // }
        // //  cout<<"heyB\n";
        // for(int i=0;i<B.size();i++){
        //     for(int j=0;j<B[i].size();j++){
        //         // cout<<":"<<B[i][j]<<":";
        //     }
        //     printf("\n");
        // }
        A.clear();
        B.clear();
    }
    return 0; 
} 

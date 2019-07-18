    #include<bits/stdc++.h>
    using namespace std;
    long long int nc2(long long int n){
        return n*(n-1)/2;
    }
    int main(){
        long long int t;
        cin>>t;
        while(t--){
            long long int n;
            cin>>n;
            vector<long long int>a;
            int odd[1000005]={0};
            int even[1000005]={0};
            for(long long int i=0;i<n;i++){
                long long int temp;
                cin>>temp;
                a.push_back(temp);
            }
            long long int ec=0;
            long long int oc=0;
            for(long long int i=0;i<n;i++){
                if(a[i]%2==0){
                    ec++;
                    even[a[i]]++;
                }else{
                    oc++;
                    odd[a[i]]++;
                }    
            }

            long long int ecc=0;
            long long int occ=0;
            double ans=0;
            for(long long int i=0;i<1000005;i++){
                ecc=ecc+nc2(even[i]);
                occ=occ+nc2(odd[i]);
            }
            ans=nc2(ec)+nc2(oc)-occ-ecc;
            sort(a.begin(),a.end());
            set<long long int>single;
            vector<long long int>tempa;
            for(long long int i=0;i<a.size();i++){
                single.insert(a[i]);
            }
            set<long long int>::iterator it =single.begin(); 
            for(it=single.begin();it!=single.end();it++){
                tempa.push_back(*it);
            }
            float itemp=0;
            for(long long int i=0;i<tempa.size();i++){
                long long int x=2^tempa[i];
                long long int aaa,bbb;
                if(odd[tempa[i]]==0){
                    aaa=even[tempa[i]];
                }else{
                    aaa=odd[tempa[i]];
                }

                if(odd[x]==0){
                    bbb=even[x];
                }else{
                    bbb=odd[x];
                }
                itemp=aaa*bbb*1.0;
                ans=ans-itemp/2.0;
            }
            cout<<(long long  int)ans<<endl;

        }
        return 0;
    }
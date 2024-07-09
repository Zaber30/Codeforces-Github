#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k;
        cin>>n;
        vector<bool>v(n+1,0);
        for(i=1;i<=n;i++){
            if(!v[i]){
                for(k=i;k<=n;k=k*2){
                    cout<<k<<" ";
                    v[k]=1;
                }
            }
        }
        cout<<endl;
    }
}

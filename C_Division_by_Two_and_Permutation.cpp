#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n+1,0);
        ll a[n],i,j,k;
         for(i=0;i<n;i++){
            cin>>a[i];
         }
         bool ok=true;
         for(i=0;i<n;i++){
            while(a[i]>n||v[a[i]]==1){
                a[i]=a[i]/2;
            }
            if(a[i]>0){
                v[a[i]]=1;
            }
            else{

                ok=false;
            }
         }
         if(ok){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }

    }
}

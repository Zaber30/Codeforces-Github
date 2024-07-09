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
    ll a[n+1];
    map<ll,ll>mp;
    for(i=1;i<=n;i++){
         cin>>a[i];
         mp[i]=a[i];
    }
    ll flag=0;
    for(i=1;i<=n;i++){
        if(mp[mp[a[i]]]==mp[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
  }
 
}
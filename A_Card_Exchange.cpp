#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
  ll t;
  cin>>t;
    while(t--){
    ll n,k,i,j;
    cin>>n>>k;
   ll a[101]={0};
   vector<ll>v;
    for(i=0;i<n;i++){
        ll temp;
        cin>>temp;
        a[temp]++;
    }
    for(i=1;i<=n;i++){
        if(a[i]>=1){
            v.push_back(a[i]);
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(i=0;i<v.size();i++){
        while(v[i]>=k){
            
        }
    }
  }
 
}
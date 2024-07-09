#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
    ll n,i,j,k;
    vector<ll>v;
    cin>>n;
    ll a[n];
    ll mx=0;
    for(i=0;i<n-1;i++){
        cin>>a[i];
        mx=max<ll>(a[i],mx);
    }
    mx=mx+1;
    v.push_back(mx);
    for(i=0;i<n-1;i++){
        mx=mx+a[i];
        v.push_back(mx);
    }
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    
   }
 
}
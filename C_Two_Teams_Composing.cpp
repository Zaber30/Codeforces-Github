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
        ll a[n];
        map<ll,ll>mp;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        if(n==1){
            cout<<0<<endl;
        }
        else  if(a[0]==a[n-1]){
            cout<<1<<endl;
        }
        else{
            ll temp=0,temp1=0;
            for(auto u:mp){
                 if(u.second>temp1){
                    temp=u.first;
                    temp1=u.second;
                 }
            }
            ll siz=unique(a,a+n)-a;
            cout<<max(min(siz,mp[temp]-1),min(siz-1,mp[temp]))<<endl;
        }
    }
 
}
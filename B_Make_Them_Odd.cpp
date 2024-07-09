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
        ll cnt=0;
        sort(a,a+n,greater<ll>());
        for(i=0;i<n;i++){
             if(mp[a[i]]>=1){
                    mp[a[i]]=0;
                while(a[i]%2==0){
                    a[i]=a[i]/2;
                    cnt++;
                    if(mp[a[i]]>=1){
                        mp[a[i]]=0;
                    }
                }
             }
        }
        cout<<cnt<<endl;
    }
}

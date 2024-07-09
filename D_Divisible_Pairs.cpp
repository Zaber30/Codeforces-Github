#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,x,y,rem1,rem2,ans=0;
        map<pair<ll,ll>,ll>mp;
        cin>>n>>x>>y;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            rem1=a[i]%x;
            rem2=a[i]%y;
            ans=ans+mp[make_pair((x-rem1)%x,rem2)];
            mp[make_pair(rem1,rem2)]++;
        }
        cout<<ans<<endl;


    }
}

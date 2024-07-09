#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i,j,k;
    cin>>n>>m;
    ll a[n+1];
    map<ll,ll>mp;
    for(i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll sum=0;
    for(i=1;i<=n;i++){
        mp[a[i]]--;
        sum+=(n-i-mp[a[i]]);

    }
    cout<<sum<<endl;


}

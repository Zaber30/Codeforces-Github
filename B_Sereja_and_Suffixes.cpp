#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i,j,k;
    cin>>n>>m;
    map<ll,ll>mp;
    ll a[n+1];
    ll b[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll cnt=0;
    for(i=n;i>=1;i--)
    {
        if(mp[a[i]]==0)
        {
            cnt++;
            mp[a[i]]++;

        }
        b[i]=cnt;
    }
    ll temp;
    for(i=1;i<=m;i++)
    {
        cin>>temp;
        cout<<b[temp]<<endl;
    }
}

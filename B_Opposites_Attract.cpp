#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    ll a[n],i;
    map<ll,ll>mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll sum=0;
    ll t=mp[0];
    for(i=1;i<=t;i++)
    {
        sum=sum+(t-i);
    }
    for(i=1;i<=10;i++)
    {
        sum=sum+(mp[i]*mp[-i]);
    }
    cout<<sum<<endl;



}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    map<ll,ll>mp;
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll sum=a[0];
    for(i=0;i<n;i++)
    {
        sum=__gcd(sum,a[i]);
    }

    if(mp[sum]>=1)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }


}

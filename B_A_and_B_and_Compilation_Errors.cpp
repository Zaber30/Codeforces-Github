#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n],b[n-1],c[n-1];
    map<ll,ll>mp,mp1,mp2;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(i=0;i<n-1;i++)
    {
        cin>>b[i];
        mp[b[i]]--;
        mp1[b[i]]++;
    }
    for(i=0;i<n-2;i++)
    {
        cin>>c[i];
        mp1[c[i]]--;

    }
    for(i=0;i<n;i++)
    {
        if(mp[a[i]]==1)
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(mp1[b[i]]==1)
        {
            cout<<b[i]<<endl;
            break;
        }

    }
}

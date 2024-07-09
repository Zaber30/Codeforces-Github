#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,k;
        ll n;
        cin>>n;
        ll a[n+2];
        map<ll,ll>mp;
        vector<ll>v;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]<=n&&mp[a[i]]==0)
            {
                mp[a[i]]++;
            }
            else
            {
                v.push_back(a[i]);
            }
        }
        sort(v.begin(),v.end());
        ll cnt=0,flag=0,j=0;
        for(i=1;i<=n;i++)
        {
            if(mp[i]==1)
            {
                continue;
            }
            else if(v[j]>=(i+i+1))
            {
                cnt++;
                j++;
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"-1"<<endl;
        else
            cout<<cnt<<endl;

    }
}

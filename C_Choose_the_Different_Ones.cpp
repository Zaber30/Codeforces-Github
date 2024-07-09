#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin>>t;
    while(t--)
    {
        ll n,m,k,i,j;
        cin>>n>>m>>k;
        map<ll,ll>mp,mp1;
        ll temp,cnt=0,cnt1=0,cnt2=0;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            mp[temp]++;
        }
        for(i=0;i<m;i++)
        {
            cin>>temp;
            mp1[temp]++;
        }
        for(i=1;i<=k;i++)
        {
            if(mp[i]>=1&&mp1[i]>=1)
            {
                cnt++;
            }
            else if(mp[i]>=1)
            {
                cnt1++;
            }
            else if(mp1[i]>=1)
            {
                cnt2++;
            }
        }
        if(cnt1<=k/2&&cnt2<=k/2&&(cnt+cnt1+cnt2)==k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll  n,i,j,k;
        cin>>n;
        ll a[n];

        vector<ll>v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        map<ll,ll>mp;
        ll l=0,mi=INT_MAX;
        sort(v.begin(),v.end());
        ll siz=unique(v.begin(),v.end())-v.begin();
        if(siz==n)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(mp.count(a[i]))
                   {
                      mi=min(mi,i-mp[a[i]]+1);
                   }
                   mp[a[i]]=i;
            }
            cout<<mi<<endl;
        }

    }
}

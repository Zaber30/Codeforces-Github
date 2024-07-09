#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n],b[n];
        vector<pair<ll,ll>>v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i});

        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" ";
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            cout<<b[v[i].second]<<" ";
        }
        cout<<endl;
    }
}

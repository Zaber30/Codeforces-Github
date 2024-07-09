#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i;
    cin>>n>>m;
    ll a[n],b[m];
    vector<pair<ll,ll>>v;
    ll ans[m];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<m;i++){
            ll temp;
        cin>>b[i];
        v.push_back(make_pair(b[i],i));
    }
    sort(v.begin(),v.end());
    ll cnt=0,j=0;
    sort(a,a+n);
    for(i=0;i<m;i++){
        while(j<n&&a[j]<=v[i].first)
        {
            cnt++;
            j++;
        }
        ans[v[i].second]=cnt;
    }
    for(i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    }

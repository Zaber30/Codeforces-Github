#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
         ll i=0,j=0,n,cnt=0;
        vector<pair<ll,ll>>v;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i+1});
        }
        sort(v.begin(),v.end());
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(v[i].first*v[j].first>=2*n)
                {
                    break;
                }
                if(v[i].first*v[j].first==v[i].second+v[j].second)
                {
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,i,j,k;
        cin>>x>>n;
        vector<ll>v;
        ll sq=sqrt(x);
        for(i=1;i<=sq;i++)
        {
            if(x%i==0)
            {
                v.push_back(i);
                if(x/i!=i)
                {
                    v.push_back(x/i);
                }
            }
        }
        sort(v.begin(),v.end());
          ll ans=v[0];
        for(j=1;j<v.size();j++)
        {
            ll temp=(x-(v[j]*n));
            if(temp>=0&&temp%v[j]==0)
            {
                ans=v[j];
            }
        }
        cout<<ans<<endl;

    }
}

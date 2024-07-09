#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i,j, ans;
    cin>>n>>m;
    vector<ll>v(n+1);
    v[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        v[i]=v[i-1]+v[i];
    }
    ll mn=INT_MAX;
    for(i=m;i<v.size();i++)
    {
        if((v[i]-v[i-m])<mn)
        {
            mn=v[i]-v[i-m];
            ans=i-m+1;

        }
    }
    cout<<ans<<endl;
}

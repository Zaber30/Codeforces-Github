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
        ll a[n];
        vector<ll>v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        ll siz=unique(v.begin(),v.end())-v.begin();
        ll l=0;
        ll ans=1;
        for(i=1;i<siz;i++)
        {

            while((v[i]-v[l]+1)>n)
            {
                l++;
            }
            ans=max(ans,i-l+1);

        }

        cout<<ans<<endl;



    }


}


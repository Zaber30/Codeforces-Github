#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
   ll n,k;
   cin>>n>>k;
   ll i,j;
   vector<ll>v(n);
   for(i=0;i<n;i++)
   {
       cin>>v[i];
   }
   ll a[k];
   for(i=0;i<k;i++)
   {
       cin>>a[i];
   }
    for(i=0;i<k;i++)
    {
        auto it=lower_bound(v.begin(),v.end(),a[i]);
        if(it==v.end())
        {
            cout<<n+1<<endl;
        }
        else
        {
            cout<<it-v.begin()+1<<endl;
        }
    }
}

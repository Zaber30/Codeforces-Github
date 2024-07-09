#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,k,i,j;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<ll,ll>mp;
    ll num=0,ans=0,l=0;
    for(i=0;i<n;i++)
    {
       if(!mp[a[i]]++)
       {
           if(++num>k)
           {
               while(true)
               {
                   if(--mp[a[l++]]==0)
                   {
                       break;
                   }
               }
               num=num-1;
           }
       }
       ans=ans+(i-l)+1;
    }
    cout<<ans<<endl;
}

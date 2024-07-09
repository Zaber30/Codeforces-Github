#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll i,j;
         ll fa=0,last=1e16,ans=0;
         while(fa<=last)
         {
             ll mid=fa+(last-fa)/2;
             if((mid-(mid/n))>=k)
                 last=mid-1;
             else
             {
                 fa=mid+1;
             }
         }
         cout<<last+1<<endl;

    }
}

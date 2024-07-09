#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll func(ll n,ll x,ll y,ll t)
{
    if(t<min(x,y))
    {
        return 0;
    }
    t=t-min(x,y);
    ll cnt=1;
    cnt=cnt+t/x+t/y;
    if(cnt>=n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    ll n,x,y,i,j,k;
    cin>>n>>x>>y;
    ll lo=0,hi=max(x,y)*n,mid,ans;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(func(n,x,y,mid))
           {
               ans=mid;
               hi=mid-1;
           }
           else
            {
                lo=mid+1;
            }

    }
    cout<<ans<<endl;

}

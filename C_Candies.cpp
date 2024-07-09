#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll func(ll n,ll mid)
{
    ll sum=0,sum1=0,temp=n;
    while(n>0)
    {
       ll o=min(n,mid);
       sum=sum+o;
       n-=o;
       n=n-(n/10);

    }
    if((sum*2)>=temp)
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
    ll n,i,j,k;
    cin>>n;
    ll lo=1,hi=1e18;
    ll ans=n,mid;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(func(n,mid))
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

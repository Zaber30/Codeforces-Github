#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll func(ll n,ll k,ll a,ll b,ll mid)
{
    ll sum=0,sum1=0,temp;
    if((mid*a)<k)
    {
        sum=sum+mid;
         k=k-(mid*a);
    }

    else
    {
        return 0;
    }
    sum=sum+((k+b-1)/b)-1;
    return sum>=n;


}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,n,a,b;
        cin>>k>>n>>a>>b;
        ll ans=-1,lo=0,hi=n,mid;
        while(lo<=hi)
        {
            mid=(lo+hi)/2;
            if(func(n,k,a,b,mid))
            {
                ans=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }

        }
        cout<<ans<<endl;
    }
}

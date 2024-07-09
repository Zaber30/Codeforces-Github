#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll check(ll a[],ll n,ll h,ll x)
{
    ll i,j,k,sum=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            continue;
        }
        sum=sum+abs(a[i]-h);

    }
    return sum<=x;

}
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,x,i,j,k;
    cin>>n>>x;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll lo=0,hi=20000000007,ans;
    ll mid;
    sort(a,a+n);
    while(lo<hi)
    {
        mid=lo+(hi-lo+1)/2;
        if(check(a,n,mid,x))
        {
            ans=lo;
            lo=mid;
        }
        else
        {
            hi=mid-1;
        }
    }
     cout<<lo<<endl;

    }
}

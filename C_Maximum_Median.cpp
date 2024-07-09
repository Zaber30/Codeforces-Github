#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll func(ll a[],ll temp1,ll n,ll temp)
{
    ll i,j,k,sum=0;
    for(i=(n/2)+1;i<n;i++)
    {
        if(a[i]<temp){
        sum=sum+(temp-a[i]);
        }
    }
    if(temp1>=sum)
    {
        return 1;
    }
    return 0;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n,k,i,j;
    cin>>n>>k;
    ll lo=0,hi=k,mid;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll temp,temp1;
    sort(a,a+n);
    ll ans=0;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        temp=a[n/2]+mid;
        temp1=(k-mid);
        if(func(a,temp1,n,temp))
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }




    }
    cout<<ans+a[n/2]<<endl;
}

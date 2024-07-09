#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll func(vector<ll>&a,ll k,double x)
{
    if(x==0)
    {
        return true;
    }
    ll cnt=0,i,j;
    for(i=0;i<a.size();i++)
    {
        cnt+=a[i]/x;
    }

    if(cnt>=k)
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
    ll n,k,i,j;
    cin>>n>>k;
    ll sum=0,temp=0,temp1=0;
    vector<ll>a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    double lo=0,hi=1e8,mid;
    cout<<setprecision(7);
    double ans;
    ll p=60;
    while(p--)
    {
        mid=lo+(hi-lo)/2;
        if(func(a,k,mid))
        {
            lo=mid;
            ans=mid;
        }
        else
        {
            hi=mid;
        }
    }
    cout<<ans<<endl;
}

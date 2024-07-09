#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,m,i,j,k;
    cin>>n>>m;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    if(n==2)
    {
       if(((a[0]*2)+2)<=m)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
    }
    else
    {
        ll sum=0;
        sum+=(a[0]*2)+1;
        for(i=1;i<n-2;i++)
        {
            sum+=(a[i])+1;
        }
        sum+=max(a[n-1],a[n-2])+2;
        if(sum<=m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    }
}

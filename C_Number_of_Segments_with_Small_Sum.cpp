#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,s,sum=0,i,j,k;
    cin>>n>>s;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l=0,ans=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        while(sum>s)
        {
            sum-=a[l];
            l++;
        }
        ans+=(i-l)+1;
    }
    cout<<ans<<endl;
}

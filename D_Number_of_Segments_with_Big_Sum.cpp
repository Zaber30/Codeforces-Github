#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,s,i,j,k;
    cin>>n>>s;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll l=0,ans=0,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        while(sum-a[l]>=s)
        {
            sum=sum-a[l];
            l++;
        }
        if(sum>=s)
        {
            ans=ans+l+1;
        }

    }
    cout<<ans<<endl;

}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,s,sum=0;
    cin>>n>>s;
    ll a[n],i,j;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=0,l=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        while(sum>s)
        {
            sum-=a[l];
            l++;
        }
        ans=max(ans,i-l+1);



    }
    cout<<ans<<endl;
}

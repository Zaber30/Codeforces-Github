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
    ll sum=0,l=0,ans=INT_MAX;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        while((sum-a[l])>=s)
        {
            sum-=a[l];
            l++;

        }
        if(sum>=s)
        {
            ans=min(ans,i-l+1);
        }

    }
    if(ans==INT_MAX)
        cout<<"-1"<<endl;
    else
    cout<<ans<<endl;
}

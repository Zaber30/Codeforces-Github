#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n+1],temp;
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        a[temp]=i;
    }
    ll sum=0;
    for(i=1;i<n;i++)
    {
        sum=sum+abs(a[i]-a[i+1]);
    }
    cout<<sum<<endl;
}

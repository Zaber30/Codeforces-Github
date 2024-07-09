#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,k,i,j;
    cin>>n>>k;
    ll a[n];
    ll pre[n+1];
    pre[0]=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        {
            pre[i+1]=a[i];
        }
        else
        {
            pre[i+1]=pre[i]+a[i];
        }
    }
    double sum=0;

    for(i=0;i<n-k+1;i++)
    {
       for(j=i+k;j<=n;j++)
       {
           double temp=pre[j]-pre[i];
           temp=(temp*1.0)/(j-i);
           sum=max(sum,temp);
       }
    }
    cout<<setprecision(10)<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m],i=0,j=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    j=0;
    ll sum=0;
    for(i=0;i<m;i++)
    {
        if(b[i]<=(sum+a[j]))
        {
            cout<<j+1<<" "<<abs(sum-b[i])<<endl;
        }
        else
        {
            sum=sum+a[j];
            j++;
            i--;
        }
    }
}

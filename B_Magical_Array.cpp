#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n;
    cin>>n;
    ll a[n],i,j,prev;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    prev=a[0];
     ll cnt=1;
    ll sum=0;
    for(i=1;i<n;i++)
    {
        if(a[i]==prev)
        {
            cnt++;
        }
        else
        {
            sum=sum+((cnt*(cnt+1)/2));
            cnt=1;
            prev=a[i];
        }
    }
    sum=sum+((cnt*(cnt+1)/2));
    cout<<sum<<endl;
}

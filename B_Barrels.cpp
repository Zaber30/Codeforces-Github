#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
     ll t;cin>>t;
     while(t--)
     {
        ll n,k;
        cin>>n>>k;
        ll a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll sum=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(k==0)
            {
                break;
            }
            else
            {
                sum=sum+a[i];
                k--;
            }
        }
        cout<<sum<<endl;

     }
}

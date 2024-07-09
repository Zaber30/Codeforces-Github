#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],i,j,k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n);
        for(i=1;i<n;i++)
        {
            if(a[0]<a[i])
            {
                ll sum=(a[i]-a[0]);
                if(sum%2!=0)
                {
                    a[0]=a[0]+sum/2+1;
                }
                else
                {
                    a[0]=a[0]+sum/2;
                }
            }
        }
        cout<<a[0]<<endl;
    }
}

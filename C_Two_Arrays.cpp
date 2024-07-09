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
        ll a[n],b[n];
        ll i,j,k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);sort(b,b+n);
        ll flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i]||(a[i]+1)==b[i])
            {
                continue;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

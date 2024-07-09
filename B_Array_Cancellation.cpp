#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                sum=sum+a[i];
            }
            else
            {
                if(sum+a[i]<0)
                {
                    sum=0;
                }
                else
                {
                    sum=sum+a[i];
                }

            }
        }
        cout<<sum<<endl;
    }
}

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
        ll temp=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<=temp)
            {
                ll sum=temp/a[i];
                sum=sum+1;
                temp=a[i]*sum;
            }
            else
            {
                temp=a[i];
            }

        }
        cout<<temp<<endl;

    }
}


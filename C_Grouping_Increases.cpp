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
        ll s=INT_MAX,t=INT_MAX,cnt=0;
        for(i=0;i<n;i++)
        {
            if(s>t)
            {
                swap(s,t);
            }
            if(a[i]<=s)
            {
                s=a[i];
            }
            else if(a[i]<=t)
            {
                t=a[i];
            }
            else
            {
                s=a[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}

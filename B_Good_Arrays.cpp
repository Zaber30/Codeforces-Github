#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cnt1=0,cnt2=0,sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>1)
            {
                sum=sum+(a[i]-1);
            }
            else
            {
                cnt1=cnt1+1;
            }
        }
        if(n==1)
        {
            cout<<"NO"<<endl;
        }
        else if(sum>=cnt1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

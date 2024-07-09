#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,comp,flag=0,sum=0;
        cin>>n>>m;
        map<ll,ll>mp;
        ll i,j;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;


        }
        sort(a,a+n);
        if(mp[0]==0)
        {
            flag=1;
            comp=0;

        }
        for(i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i]>=2))
            {
                comp=a[i]+1;
                flag=1;
            }
        }
        if(flag==1&&m!=0)
        {
            sum=a[n-1]+comp;
            if(sum%2==0)
            {
                sum=(sum/2);
            }
            else
            {
                sum=(sum/2)+1;
            }
            if(mp[sum]==0)
            {
                n=n+1;
            }
        }
        else
        {
            n=n+m;
        }
        cout<<n<<endl;
    }
}

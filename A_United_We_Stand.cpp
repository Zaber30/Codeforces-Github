#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0,temp;
        cin>>n;
        ll a[n],i,j,k;
        vector<ll>v1,v2;
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        if(a[0]==a[n-1])
        {
            cout<<"-1"<<endl;
        }
        else
        {

        for(i=0;i<mp[a[0]];i++)
        {
            v2.push_back(a[0]);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=a[0])
            {
                v1.push_back(a[i]);
            }
        }
        cout<<v2.size()<<" "<<v1.size()<<endl;
        for(i=0;i<v2.size();i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";

        }
        cout<<endl;
        }


    }
}

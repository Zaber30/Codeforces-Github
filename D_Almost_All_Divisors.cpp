#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        vector<ll>v(n),v1;
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll x=(v[0]*v[n-1]);
        for(i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                v1.push_back(i);
                if(i!=x/i)
                {
                    v1.push_back(x/i);
                }
            }
        }
        sort(v1.begin(),v1.end());
        if(v1==v)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

}

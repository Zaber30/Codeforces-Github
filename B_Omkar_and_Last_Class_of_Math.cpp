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
        vector<ll>v;
        ll r=sqrt(n);

        for(i=2;i<=r;i++)
        {
            if(n%i==0)
            {
                v.push_back(n/i);
                v.push_back(i);
            }
        }
        sort(v.begin(),v.end());
        if(v.empty())
        {
            cout<<"1"<<" "<<(n-1)<<endl;
        }
        else
        {
            cout<<v[v.size()-1]<<" "<<(n-v[v.size()-1])<<endl;
        }

    }
}

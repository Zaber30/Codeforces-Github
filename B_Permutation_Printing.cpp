#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        vector<ll>v;
        ll cnt=1;
        ll temp=n/2;
        for(i=1;i<=temp;i++)
        {
            v.push_back(n-cnt+1);
            v.push_back(cnt);
            cnt++;
        }
        if(n%2==1)
        {
            v.push_back(cnt);

        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}


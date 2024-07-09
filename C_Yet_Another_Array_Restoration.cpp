#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        ll n,x,y;
        cin>>n>>x>>y;
        ll b=n-1;
        ll l;
        while(1)
        {
            if((y-x)%b==0)
            {
            l=(y-x)/b;
                break;
            }
            else
            {
                b--;
            }
        }
        b=b+1;
        ll i;
        for(i=x;i<=y;i=i+l)
        {
            v.push_back(i);
        }
        while(b<n&&(x-l)>0)
        {
            v.push_back(x-l);
            x=x-l;
            b++;
        }
        while(b<n)
        {
            v.push_back(y+l);
            y=y+l;
            b++;
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

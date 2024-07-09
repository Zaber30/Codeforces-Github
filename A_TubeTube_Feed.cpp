#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using ll=long long;
#define pi acos(-1);
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        vector<pair<int,int>>v;

        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]<=m)
            {
                v.push_back({i,b[i]});
            }
            m=m-1;

        }
        int maxn=-1,pos=0;
        for(auto u:v)
        {
            if(u.second>maxn)
            {
                maxn=u.second;
                pos=u.first;
            }

        }
        if(maxn==-1)
        {
            cout<<maxn<<endl;
        }
        else
        {
            cout<<pos+1<<endl;
        }

    }
    return 0;
}

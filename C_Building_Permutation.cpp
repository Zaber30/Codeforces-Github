#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    int a[n+1],i;
    map<int,int>mp;
    vector<int>v;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int b[n+1]={0};
    for(i=1;i<=n;i++)
    {
        if(mp[i]>=1)
        {
            b[i]=i;
            mp[i]--;
        }
    }
    for(auto u:mp)
    {
        for(i=0;i<u.second;i++)
        {
            v.push_back(u.first);
        }
    }
    sort(v.begin(),v.end());
    int k=0;
    ll sum=0;
    for(i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            if(v[k]<0)
            {
                sum=sum-(v[k]);
                sum=sum+i;
                k++;
            }
            else
            {

                sum=sum+abs(v[k]-i);
                k++;
            }
        }

    }
    cout<<sum<<endl;

}

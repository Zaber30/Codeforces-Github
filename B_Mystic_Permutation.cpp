#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j;
        map<int,int>mp;
        vector<int>v;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int mini;
        for(i=0;i<n;i++)
        {
            mini=10000;
            for(j=0;j<n;j++)
            {
                if(i!=j&&mp[a[j]]>=1)
                {
                    mini=min(mini,a[j]);
                }
            }
            v.push_back(mini);
            mp[mini]--;
        }
        if(n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=1;i<v.size();i++)
            {
                if(v[i]>n)
                {
                    int n=v[i-1];
                    v[i]=n;
                    v[i-1]=(i+1);
                }
            }
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
}

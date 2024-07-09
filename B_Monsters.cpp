#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v;
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]==k){
                v.push_back({a[i],i+1});
            }
            else if(a[i]%k==0)
            {
                v.push_back({k,i+1});
            }
            else
            v.push_back({a[i]%k,i+1});
        }
        sort(v.begin(),v.end());
        map<int,int>mp;
         for(i=0;i<n;i++)
         {
             mp[v[i].first]++;
         }
         for(i=v.size()-1;i>=0;)
         {
             if(mp[v[i].first]>1)
             {
                 int ct=v[i].first;
                 vector<int>th;
                 while(mp[ct]>=1)
                 {
                     th.push_back(v[i].second);
                     mp[ct]--;
                     i--;

                 }
                 sort(th.begin(),th.end());
                 for(j=0;j<th.size();j++)
                 {
                     cout<<th[j]<<" ";
                 }
             }
             else
             {
                 cout<<v[i].second<<" ";
                 i--;
             }
             //cout<<endl;
         }
         cout<<endl;
    }
}

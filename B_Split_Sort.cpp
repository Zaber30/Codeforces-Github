#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i;
        vector<pair<int,int>>v;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        int cnt=0;
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i].second>v[i+1].second)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}

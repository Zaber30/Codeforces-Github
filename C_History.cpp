#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    int i,j;
    cin>>n;
    vector<pair<int,int>>v;
    for(i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    int cnt=0;
    int mini=v[0].first;
    int maxi=v[0].second;
    for(i=1;i<v.size();i++)
    {
        if(v[i].second<maxi&&v[i].first>mini)
        {
            cnt++;
        }
        else
        {
            mini=v[i].first;
            maxi=v[i].second;
        }
    }
    cout<<cnt<<endl;

}

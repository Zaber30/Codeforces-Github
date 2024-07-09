#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s[n];
    vector<string>v1,v2,v3;
    map<string,int>mp;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        mp[s[i]]++;
    }
    for(i=0;i<n;i++)
    {
        string s1=s[i];
        reverse(s[i].begin(),s[i].end());
        if(s1==s[i])
        {
            v2.push_back(s1);
        }

        else if(mp[s[i]]>=1&&mp[s1]>=1)
        {
            mp[s[i]]--;
            mp[s1]--;
            v1.push_back(s1);
            v3.push_back(s[i]);

        }
        else if(s1==s[i])
        {
            v2.push_back(s1);
        }
    }
     int cnt=0;
    for(i=0;i<v1.size();i++)
    {
        cnt+=v1[i].size();

    }
    for(i=0;i<v2.size();i++)
    {
        cnt+=v2[i].size();
        break;
    }
    for(i=v3.size()-1;i>=0;i--)
    {
        cnt+=v3[i].size();
    }
    cout<<cnt<<endl;
    for(i=0;i<v1.size();i++)
    {
        cout<<v1[i];

    }
    for(i=0;i<v2.size();i++)
    {
        cout<<v2[i];
        break;
    }
    for(i=v3.size()-1;i>=0;i--)
    {
        cout<<v3[i];
    }
    cout<<endl;



}

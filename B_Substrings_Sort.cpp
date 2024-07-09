#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    int i,j;
    string s[n];
    vector<int>v;
    vector<string>s1;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        v.push_back(s[i].size());
    }
    sort(v.begin(),v.end());
    int siz=unique(v.begin(),v.end())-v.begin();
    for(i=0;i<siz;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[j].size()==v[i])
            {
                s1.push_back(s[j]);
            }
        }
    }
    int flag=0;
    for(i=1;i<s1.size();i++)
    {
        if(s1[i].find(s1[i-1])==-1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0;i<s1.size();i++)
        {
            cout<<s1[i]<<endl;
        }
    }
}

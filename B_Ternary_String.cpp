#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    map<char,ll>mp;
    string s;
    ll i,j,k;
    cin>>s;
    ll ans=INT_MAX;
    mp['1']=INT_MAX;
    mp['2']=INT_MAX;
    mp['3']=INT_MAX;
    ll temp;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            mp['1']=i+1;
            if(mp['2']<=s.size()&&mp['3']<=s.size())
            {
                temp=min(mp['2'],mp['3']);
                ans=min(ans,i+1-temp+1);
            }
        }
        else if(s[i]=='2')
        {
            mp['2']=i+1;
            if(mp['1']<=s.size()&&mp['3']<=s.size())
            {
                temp=min(mp['1'],mp['3']);
                ans=min(ans,i+1-temp+1);
            }
        }
        else if(s[i]=='3')
        {
            mp['3']=i+1;
            if(mp['2']<=s.size()&&mp['1']<=s.size())
            {
                temp=min(mp['2'],mp['1']);
                ans=min(ans,i+1-temp+1);
            }
        }

    }
    if(ans==INT_MAX)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }


    }

}

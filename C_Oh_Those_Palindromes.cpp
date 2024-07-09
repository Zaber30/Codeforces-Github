#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll a[26]={0},i,j;
        for(i=0;i<s.size();i++)
        {
           a[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            for(j=0;j<a[i];j++)
            {
                cout<<(char)(i+'a');
            }
        }
        cout<<endl;
    }
}

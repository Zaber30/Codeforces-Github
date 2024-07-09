#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,k;
        vector<char>v;
        string s;
        cin>>s;
        string m=s;
        sort(m.begin(),m.end());
        if(m[0]==m[m.size()-1])
        {
            cout<<m<<endl;
        }
        else
        {
        for(i=0;i<s.size();i++)
        {


                v.push_back('0');
                v.push_back('1');

        }
         for(i=0;i<v.size();i++)
         {
             cout<<v[i];
         }
         cout<<endl;
        }
    }
}

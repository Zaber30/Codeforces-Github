#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string,int>mp;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    int mk=-1;
    string f;
     for(auto u:mp)
     {
         if(u.second>mk)
         {
             mk=u.second;
             f=u.first;
         }
     }
    cout<<f<<endl;
}

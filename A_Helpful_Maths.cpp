#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int i;
    cin>>s;
    vector<int>v;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            int c=s[i]-'0';
            v.push_back(c);
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size()-1;i++)
    {
        cout<<v[i]<<'+';
    }
    cout<<v[v.size()-1]<<endl;

}

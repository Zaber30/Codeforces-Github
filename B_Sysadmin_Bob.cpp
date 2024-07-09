#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s;
    int i,j;
    cin>>s;
    vector<int>v;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='@')
        {
            v.push_back(i);
        }
    }
    int flag=0;
    if(v.empty())
    {
        cout<<"No solution"<<endl;
        return 0;
    }
    else{
    for(i=0;i<v.size()-1;i++)
    {
        if((v[i+1]-v[i])<=2)
           {
                flag=1;
                break;

           }
    }
    }

    if(flag==1||v[0]==0||v[v.size()-1]==s.size()-1)
    {
        cout<<"No solution"<<endl;
    }
    else
    {
       int k=0;
        string m;
        for(i=0;i<s.size();)
        {
            if(s[i]=='@')
            {
                 k++;
                 if(k==v.size())
                 {
                     while(i!=s.size())
                     {
                         m=m+s[i];
                         i++;
                     }
                 }
                 else if(i+2!=s.size())
                 {
                     m=m+s[i];
                     m=m+s[i+1];
                     m=m+',';
                     i=i+2;

                 }
            }
            else
            {
                m=m+s[i];
                i++;
            }
        }
        cout<<m<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    cin>>s1;
    int i,j,num=0,num1=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=s1[i])
        {
            num=i;
            break;
        }
    }
    for(j=i+1;j<s.size();j++)
    {
        if(s[j]!=s1[j])
        {
            num1=j;
            break;
        }
    }
    swap(s[num],s[num1]);
    if(s==s1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int temp=n,cnt=0,i;
    string s=to_string(temp);
    for(i=0;i<s.size();i++)
    {
       if(s[i]=='4'||s[i]=='7')
       {
           cnt++;
       }
    }
    if(cnt==s.size())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(n%4==0||n%7==0||n%47==0||n%744==0||n%447==0||n%474==0||n%74==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        stack<char>st1,st2;
        cin>>s;
        int i,j;
        for(i=n-1;i>=0;i--)
        {
            st1.push(s[i]);
        }
        while(!st1.empty())
        {
            if(st2.size()==0)
            {
                st2.push(st1.top());
                st1.pop();
            }
            else if(st2.top()=='('&&st1.top()==')')
            {
                st2.pop();
                st1.pop();
            }
            else
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        cout<<st2.size()/2<<endl;
    }
}

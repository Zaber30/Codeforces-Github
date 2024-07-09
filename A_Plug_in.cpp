#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    stack<char>st1,st2;
    for(i=0;i<s.size();i++)
    {
        st1.push(s[i]);

    }
    char x;
    while(st1.size()!=NULL)
    {
        if(st2.size()!=NULL)
        {
            if(st1.top()==st2.top())
            {
                st1.pop();
                st2.pop();
            }
            else
            {
                x=st1.top();
                st1.pop();
                st2.push(x);
            }
        }
        else
        {
            x=st1.top();
            st1.pop();
            st2.push(x);
        }
    }
    while(st2.size()!=NULL)
    {
        cout<<st2.top();
        st2.pop();
    }
    cout<<endl;
}

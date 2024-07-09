#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s;
    cin>>s;
    bool f=false;
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='0'&&f==false)
        {
            f=true;
            break;
        }
    }
    if(f==false)
    {
        for(i=1;i<s.size();i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0'&&f==true)
            {
                f=false;
            }
            else
            {
                cout<<s[i];
            }

        }
        cout<<endl;
    }
}

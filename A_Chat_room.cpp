#include<bits/stdc++.h>
using namespace std;
#define First ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void hello()
{
    string s;
    cin>>s;
    string h="hello";
    int i=0,j=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==h[j])
        {
            j++;
        }

    }
    if(j==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main()
{
    First;
    hello();
}


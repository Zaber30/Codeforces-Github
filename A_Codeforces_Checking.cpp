#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        char ch;
        int j,cnt=0;
        cin>>ch;
        string s="codeforces";
        for(j=0;j<s.size();j++)
        {
            if(s[j]==ch)
            {
                cnt++;
                break;
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,i;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='Q')
            {
                cnt++;
            }
            else
            {
                if(cnt>=1)
                {
                    cnt--;
                }
            }
        }
        if(cnt==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

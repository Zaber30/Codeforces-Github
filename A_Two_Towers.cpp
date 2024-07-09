#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0,i;
        cin>>n>>m;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        reverse(s2.begin(),s2.end());
        s1=s1+s2;
        for(i=0;i<s1.size()-1;i++)
        {
            if(s1[i]==s1[i+1])
            {
                cnt++;
            }
        }
        if(cnt>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

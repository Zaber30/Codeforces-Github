#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag1=0,flag2=0,i,j;
    cin>>n>>m;
    string s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            flag1=1;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(s[i][j]!=s[i][j+1])
            {
                flag2=1;
            }
        }
    }
    if(flag1==1||flag2==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int i,cnt=0,sum=0;
    string s;
    cin>>s;
    for(i=1;i<n;i++)
    {
        if(s[i]==s[i-1]&&(s[i]=='#'&&s[i-1]=='#'))
        {
            cnt++;
        }
        else if(s[i]=='#')
        {
            cnt++;
        }
        else
        {
            sum=max(sum,cnt);
            cnt=0;
        }
    }
    sum=max(sum,cnt);
    if(sum<k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

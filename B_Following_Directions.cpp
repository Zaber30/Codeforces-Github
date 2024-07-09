#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int left=0,upper=0,j,cnt=0,n;
        string s;
        cin>>n;
        cin>>s;
        for(j=0;j<n;j++)
        {
            if(s[j]=='U')
            {
                upper=upper+1;
            }
            else if(s[j]=='D')
            {
                upper=upper-1;
            }
            else if(s[j]=='R')
            {
                left=left+1;
            }
            else if(s[j]=='L')
            {
                left=left-1;
            }
            if(left==1&&upper==1)
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

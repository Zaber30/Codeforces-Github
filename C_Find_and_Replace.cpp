#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,a[26]={0},cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(j=0;j<s.size();j++)
        {

            if(j%2==0&&a[s[j]-'a']==0)
            {
                a[s[j]-'a']=1;
            }
            if(j%2!=0&&a[s[j]-'a']==0)
            {
                a[s[j]-'a']=2;
            }
            if(j%2!=0&&a[s[j]-'a']==1)
            {
                cnt=1;
                break;
            }
            if(j%2==0&&a[s[j]-'a']==2)
            {
                cnt=1;
                break;
            }
        }
        if(cnt!=1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

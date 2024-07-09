#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int m;
        int b[26]={0},j=0,sum=0;
        string s;
        cin>>m;
        cin>>s;
        for(j=0;j<m;j++)
        {
            b[s[j]-'A']++;
        }
        for(j=0;j<26;j++)
        {
            if(b[j]==1)
            {
                sum=sum+b[j]*2;
            }
            else if(b[j]>1)
            {
                sum=sum+(b[j]*1+1);
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}

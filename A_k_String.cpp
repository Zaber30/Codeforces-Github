#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[26]={0},flag=0,temp,j,k;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]%n!=0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<26;j++)
            {
                temp=a[j]/n;
                for(k=0;k<temp;k++)
                {
                     printf("%c",(j+'a'));
                }

            }
        }
        cout<<endl;
    }

}

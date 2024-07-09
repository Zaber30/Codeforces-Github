#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26]={0},i=0,j,k=0,l;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    for(i=25;i>=0;i--)
    {
        if(a[i]>=1)
        {

            for(j=k;j<s.size();j++)
               {
                   if(s[j]==(i+'a'))
                   {
                       printf("%c",(i+'a'));
                       a[i]--;

                   }
                   else
                   {
                       a[s[j]-'a']--;
                   }
                   if(a[i]==0)
                   {
                       k=j+1;
                       break;
                   }
               }

        }

    }
}

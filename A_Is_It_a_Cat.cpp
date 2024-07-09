#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       int n;
        char s[60];
       cin>>n;
       cin>>s;
       string m="";
       int j;
       for(j=0;j<n;j++)
       {
           s[j]=tolower(s[j]);
        }
       for(j=1;j<n;j++)
       {
           if(s[j]!=s[j-1])
           {
               m=m+s[j-1];
           }
       }
       m=m+s[n-1];
       if(m=="meow")
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }

       }
}

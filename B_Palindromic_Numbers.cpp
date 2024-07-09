#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
       int n,i;
       string s;
       cin>>n;
       cin>>s;
       if(s[0]!='9')
       {
           for(i=0;i<n;i++)
           {
               int l=9-(s[i]-'0');
               s[i]=l+'0';
           }
           cout<<s<<endl;
       }
       else
       {
           int l=0;
           string w="";
           for(i=(n-1);i>=0;i--)
           {
               int m=(s[i]-'0')+l;
               if(m>1)
               {
                   int r=11-m;
                   char ch=r+'0';
                   l=1;
                   w=w+ch;
                }
                else
                {
                    int r=1-m;
                    char ch=r+'0';
                    l=0;
                    w=w+ch;
                }


           }
           reverse(w.begin(),w.end());
           cout<<w<<endl;

       }

   }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i;
   cin>>n;
   string s="ROYGBIV",s1="ROYG";
   int n1=n/4;
   int n2=n%4;
   if(n==7)
   {
       cout<<s<<endl;
   }
   else if(n2==0)
   {
       for(i=1;i<n1;i++)
       {
           cout<<s1;
       }
       cout<<s1[0]<<"BIV"<<endl;

   }
   else if(n2==1)
   {
       for(i=1;i<n1;i++)
       {
           cout<<s1;
       }
       for(i=0;i<2;i++)
       {
           cout<<s1[i];
       }
       cout<<"BIV"<<endl;
   }
   else if(n2==2)
   {
       for(i=1;i<n1;i++)
       {
           cout<<s1;
       }
       for(i=0;i<3;i++)
       {
           cout<<s1[i];
       }
       cout<<"BIV"<<endl;
   }
   else if(n2==3)
   {
       for(i=1;i<=n1;i++)
       {
           cout<<s1;
       }
       cout<<"BIV"<<endl;
   }

}

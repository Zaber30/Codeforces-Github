#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,i,j,k;
       cin>>n;
       ll a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       ll temp=a[0],temp1=a[n-1],mi=0,ma=n-1;
       for(i=0;i<n;i++)
       {
           if(temp==a[i])
           {
               mi=i;
           }
           else
           break;
       }
       for(i=n-1;i>=0;i--)
       {
           if(temp1==a[i])
           {
               ma=i;

           }
           else
           {
               break;
           }

       }
       if(ma<=mi&&temp==temp1)
       {
           cout<<"0"<<endl;
       }
       else if(temp==temp1)
       {
           cout<<(ma-mi-1)<<endl;
       }
       else
       {
           cout<<min(n-mi-1,ma)<<endl;
       }
   }
}


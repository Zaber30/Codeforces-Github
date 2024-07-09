#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   int i;
   int a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   int cnt=0;
   for(i=0;i<n;i++)
   {
       if(cnt==k)
       {
           break;
       }
       if(a[i]<0)
       {
           a[i]=(-1*a[i]);
           cnt++;
       }

   }
   k=k-cnt;
   sort(a,a+n);
    int sum=0;
   if(k%2==1)
   {
       if(a[0]<0)
       {
           sum=sum+(-1*a[0]);
       for(i=1;i<n;i++)
       {
           sum=sum+a[i];
       }
       cout<<sum<<endl;
       }
       else
       {
           sum=sum-a[0];
           for(i=1;i<n;i++)
           {
               sum=sum+a[i];
           }
           cout<<sum<<endl;
       }
   }
   else
   {
       for(i=0;i<n;i++)
       {
           sum=sum+a[i];
       }
       cout<<sum<<endl;
   }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,maxi,mini;
    cin>>n>>sum;
     int i;
     int diff=0,d[31]={0},sum1[31]={0},cnt=0;
     for(i=0;i<n;i++)
     {
         cin>>mini>>maxi;
         if(sum>=mini)
         {
            sum1[i]=mini;
            sum=sum-mini;
            cnt++;
         }
         d[i]=(maxi-mini);
     }
     for(i=0;i<n;i++)
     {
         if(sum==0)
         {
             break;
         }
         else if(sum>=d[i])
         {
             sum1[i]+=d[i];
             sum=sum-d[i];
         }
         else
         {
            sum1[i]+=sum;
            sum=0;

         }
     }
     if(sum==0&&cnt==n)
     {
         cout<<"YES"<<endl;
         for(i=0;i<n;i++)
         {
             cout<<sum1[i]<<" ";
         }
         cout<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }




}

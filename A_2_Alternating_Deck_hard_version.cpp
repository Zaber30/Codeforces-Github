#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       int n,sum=5,j,white1=1,black1=0,white2=0,black2=0;
       cin>>n;
       n=n-1;
       for(j=1;j;j++)
       {
           if(j%2==1)
           {
               if(n<=sum)
               {
                   if(n%2==1)
                   {
                       black2+=(n/2)+1;
                       white2+=(n/2);
                   }
                   else
                  {
                      black2+=(n/2);
                      white2+=(n/2);

                   }
                   break;
               }
               else
               {
                  white2+=(sum/2);
                  black2+=(sum/2)+1;
               }
           }
           else
           {
               if(n<=sum)
               {
                   if(n%2==1)
                   {
                       white1+=(n/2)+1;
                       black1+=(n/2);
                   }
                   else
                   {
                       white1+=(n/2);
                       black1+=(n/2);
                   }

                   break;

               }
               else
               {
                   white1+=(sum/2)+1;
                   black1+=(sum/2);

               }
           }
           n=n-sum;
           sum=sum+4;
       }
       cout<<white1<<" "<<black1<<" "<<white2<<" "<<black2<<" "<<endl;
    }
}


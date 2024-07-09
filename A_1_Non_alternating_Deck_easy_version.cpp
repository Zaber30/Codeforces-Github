#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       int n,alice=1,bob=0,sum=5,j;
       cin>>n;
       n=n-1;
       for(j=1;j;j++)
       {
           if(j%2==1)
           {
               if(n<=sum)
               {
                   bob=bob+n;
                   break;
               }
               else
               {
                   bob=bob+sum;
               }
           }
           else
           {
               if(n<=sum)
               {
                   alice=alice+n;
                   break;

               }
               else
               {
                   alice=alice+sum;
               }
           }
           n=n-sum;
           sum=sum+4;
       }
       cout<<alice<<" "<<bob<<endl;
    }
}

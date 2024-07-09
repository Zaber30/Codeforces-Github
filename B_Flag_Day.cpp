#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i,j,k,num,num1,num2;
    cin>>n>>m;
    ll a[n+1]={0};
     for(i=0;i<m;i++)
     {
         cin>>num>>num1>>num2;
         if(a[num]==1)
         {
             a[num1]=2;
             a[num2]=3;
         }
         else if(a[num]==2)
         {
             a[num1]=1;
             a[num2]=3;
         }
         else if(a[num]==3)
         {
             a[num1]=1;
             a[num2]=2;
         }
         else if(a[num1]==1)
         {
             a[num]=2;
             a[num2]=3;
         }
         else if(a[num1]==2)
         {
             a[num]=1;
             a[num2]=3;
         }
         else if(a[num1]==3)
         {
             a[num]=1;
             a[num2]=2;
         }
         else if(a[num2]==1)
         {
             a[num]=2;
             a[num1]=3;
         }
         else if(a[num2]==2)
         {
             a[num]=1;
             a[num1]=3;
         }
         else if(a[num2]==3)
         {
             a[num]=1;
             a[num1]=2;
         }
         else
         {
             a[num]=1;
             a[num1]=2;
             a[num2]=3;
         }
     }
     for(i=1;i<=n;i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
}

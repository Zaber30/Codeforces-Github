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
       n=2*n;
       ll a[n];
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
       ll sum=0;
       for(i=0;i<n-1;i=i+2)
       {
           sum=sum+a[i];
       }
       cout<<sum<<endl;
   }
}


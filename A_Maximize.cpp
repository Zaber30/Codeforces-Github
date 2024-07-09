#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
     ll t;
     cin>>t;
     while(t--){
        ll x;
        cin>>x;
       ll temp,i;
       temp=0;
       ll temp1;

       for(i=1;i<x;i++){
          ll sum=0;
            sum=__gcd(i,x);
            sum=sum+i;
           if(sum>=temp){
            temp=sum;
            temp1=i;
           }
       }
       cout<<temp1<<endl;
     }
 
}
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
       ll n,i,j,k;
       cin>>n;
       ll x=0,y=0,sum=0;
       vector<ll>a(n);
       for(i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
        x=x^a[i];
       }
       sum=sum+x;
       
       cout<<2<<endl;
       cout<<sum<<" "<<x<<endl;


   }   
 
}
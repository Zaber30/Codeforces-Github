#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
   ll t;
   cin>>t;
   while(t--){
    map<ll,ll>mp;
    ll n,i,j,k,sum=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        sum=sum+a[i];
    }
    if(sum%3==0){
        cout<<0<<endl;
    }
    else if(sum%3==1){
            ll flag=0;
        for(i=0;i<n;i++){
            if(a[i]%3==1){
                flag=1;
                break;
            }
        }
         if(flag==1){
            cout<<1<<endl;
         }
         else{
            cout<<2<<endl;
         }
    }
    else if(sum%3==2){

         cout<<1<<endl;
    }

   }
}

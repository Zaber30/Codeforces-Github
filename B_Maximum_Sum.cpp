#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=1e9+7;
int main()
{
   ll t;
   cin>>t;
   while(t--){
      ll n,k,i,j;
      cin>>n>>k;
      ll a[n],maxsum=0,cursum=0,sum=0;
      for(i=0;i<n;i++){
        cin>>a[i];
        maxsum=max(a[i],maxsum);
        sum=sum+a[i];
      }
      for(i=0;i<n;i++){
        cursum=cursum+a[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0){
            cursum=0;
        }
      }
     for(i=1;i<=k;i++){
        sum=sum+(maxsum);
        sum=sum%mod;
        maxsum=(maxsum*2)%mod;
     }
     if(sum<0){
        sum=(sum+mod)%mod;
        cout<<sum<<endl;
     }else{
     cout<<sum%mod<<endl;}

   }

}


#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
   ll n,i,j,k;
   cin>>n;
   ll a[n];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   ll ans=2,cnt=2;
   if(n==1)
   {
       cout<<n<<endl;
       return 0;
   }
    for(i=2;i<n;i++)
   {
       if(a[i]==(a[i-1]+a[i-2]))
       {
           cnt++;
       }
       else
       {
            ans=max<ll>(ans,cnt);
            cnt=2;
       }
   }
   ans=max<ll>(ans,cnt);
   cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,k,i,j,ans=0;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];

    ll sum1=(a[i]-(k*(a[i]/k)));
    ll sum2=(a[i]-(k*3));
     sum1=max(sum1,sum2);

     ans=ans+sum1;
    }
     cout<<ans<<endl;

}

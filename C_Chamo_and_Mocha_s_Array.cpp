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
        ll a[n+1];
        ll pref[n+1],suf[n+1];
        ll mi=0,mx=INT_MAX;
        for(i=1;i<=n;i++){
            cin>>a[i];
            mi=max(a[i],mi);
            pref[i]=mi;
            
        }
        for(i=n;i>=1;i--){
            mx=min(mx,a[i]);
            suf[i]=mx;
        }
        ll mx1=0;
        pref[0]=a[1];
        for(i=1;i<n;i++){
            if(a[i]<=suf[i]){
                mx1=max(mx1,a[i]);
            }
        }
        cout<<mx1<<endl;

    }
}

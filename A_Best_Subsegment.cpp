#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,i,j,k;
    cin>>n;
    ll mx=0,cnt=0,ans=0;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==mx){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=0;
        }

    }
    ans=max(ans,cnt);
    cout<<ans<<endl;
}

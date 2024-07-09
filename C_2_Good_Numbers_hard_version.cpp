#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k;
        cin>>n;
        ll ans=0,pw=1;
        while(ans<n){
            ans+=pw;
            pw=pw*3;
        }
        while(pw){
            if(ans-pw>=n){
                ans=ans-pw;
            }
            pw/=3;
        }
        cout<<ans<<endl;
    }

}

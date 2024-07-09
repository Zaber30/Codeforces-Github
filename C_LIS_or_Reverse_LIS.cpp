#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll cnt=0,cnt1=0;
        for(auto it:mp){
            if(it.second>=2){
                cnt++;
                cnt1++;
            }
            else{
                if(cnt>cnt1){
                    cnt1++;
                }
                else{
                    cnt++;
                }
            }
        }
        cnt1++;
        cout<<min(cnt,cnt1)<<endl;
    }

}

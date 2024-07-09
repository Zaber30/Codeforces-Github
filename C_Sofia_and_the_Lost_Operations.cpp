#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll i,j,k,n,m;
        cin>>n;
        map<ll,ll>mp,mp1,mp2;
        vector<ll>v;
        ll a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            mp[b[i]]++;
            mp1[b[i]]++;
        }
        cin>>m;
        ll c[m];
        for(i=0;i<m;i++){
            cin>>c[i];

        }
        ll cnt=0;
        for(i=0;i<n;i++){
            if(a[i]==b[i]){
                mp[b[i]]--;
                cnt++;
            }
        }

        ll flag=0;
        for(i=0;i<m;i++){
            if(mp[c[i]]==0&&mp1[c[i]]==0){
                flag=1;
            }
            else if(mp[c[i]]>=1){
                flag=0;
                mp[c[i]]--;
                cnt++;
            }
            else if(mp1[c[i]]>=1){
                flag=0;
            }

        }

        if(cnt==n&&flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }




    }
}

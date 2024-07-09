#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){

        ll n,m,k,i,j,l=0;
        cin>>n>>m>>k;
        ll a[n],b[m];
        map<ll,ll>mp,mp1,mp2;
        ll cnt=0,cnt1=0;
        for(i=0;i<n;i++){
            cin>>a[i];
           if(i<m){
            mp[a[i]]++;
           }
        }
        for(i=0;i<m;i++){
            cin>>b[i];
            mp1[b[i]]++;

        }
        for(auto u:mp1){
            cnt=cnt+min(mp[u.first],mp1[u.first]);
        }
        if(cnt>=k){
            cnt1++;
        }
        for(i=m;i<n;i++){
            mp[a[l]]--;
            //mp[a[i]]++;

            if(mp1[a[l]]>mp[a[l]]){
                cnt--;
            }
            if(mp1[a[i]]>mp[a[i]]){
                cnt++;
            }
            mp[a[i]]++;
            l++;
            if(cnt>=k){
                cnt1++;
            }
        }
        cout<<cnt1<<endl;


    }
}

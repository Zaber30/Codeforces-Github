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
        ll a[n];
        vector<ll>v;
        map<ll,ll>mp;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto u:mp){
            v.push_back(u.second);
        }
        sort(v.begin(),v.end());
        ll pref[v.size()]={0};
        ll ans=n;
        for(i=0;i<v.size();i++){
            if(i==0){
                pref[i]=v[i];
            }
            else{
                pref[i]=pref[i-1]+v[i];
            }
        }

        for(i=0;i<v.size();i++){
            if(i==0){
                    ll sum=0;
                sum=pref[v.size()-1]-pref[i];
                ll temp=v.size()-i-1;
                temp=(temp*v[i]);
                sum=sum-temp;
                ans=min(ans,sum);
            }
            else if(i==v.size()-1){
                ans=min(ans,pref[i-1]);
            }
            else{
                ll sum=0;
                sum=pref[i-1];
                sum=sum+(pref[v.size()-1]-pref[i]);
                ll temp=v.size()-i-1;
                temp=(temp*v[i]);
                 sum=sum-temp;
                 ans=min(ans,sum);
            }
        }
        cout<<ans<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
     ll n,i,j,k,m;
     cin>>n>>m;
     map<string,ll>mp;
     vector<ll>v(n),v1;
     for(i=0;i<n;i++){
        cin>>v[i];
     }
     sort(v.begin(),v.end());
     for(i=0;i<m;i++){
        string s;
        cin>>s;
        mp[s]++;
     }
     for(auto u:mp){
        v1.push_back(u.second);
     }
     sort(v1.begin(),v1.end(),greater<ll>());
    ll sum=0,sum1=0;
     for(i=0;i<v1.size();i++){
        sum=sum+(v1[i]*v[i]);
     }
    sort(v.begin(),v.end(),greater<ll>());
    for(i=0;i<v1.size();i++){
        sum1=sum1+(v1[i]*v[i]);
    }
    cout<<sum<<" "<<sum1<<endl;

}

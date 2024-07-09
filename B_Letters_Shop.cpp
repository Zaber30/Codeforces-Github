#include<bits/stdc++.h>
using namespace std;
using ll=long long;
vector<ll>v[26];
int main()
{
  ll m;
  cin>>m;
  
    string s;

    cin>>s;
    ll n,i,j,k;
    
    for(i=0;i<s.size();i++){
        v[s[i]-'a'].push_back(i+1);
    }
    cin>>n;
    for(i=0;i<n;i++){
        string s1;
        cin>>s1;
        vector<ll>cnt(26);
        for(auto &u:s1){
            cnt[u-'a']++;
        }
        ll ans=-1;
        for(j=0;j<26;j++){
            if(cnt[j]>0){
                ans=max(ans,v[j][cnt[j]-1]);
            }
        }
        cout<<ans<<endl;

    }
  }
 

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        map<ll,ll>mp;
        ll i,j,k;
        ll cur=0;
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]=='+'){
                cur++;
            }
            else{
                cur--;
            }
             if(cur<0){
                if(mp.find(abs(cur)-1)==mp.end()){
                    mp[abs(cur)-1]=i+1;
                }
             }
             
        }
        if(mp.empty()){
            cout<<s.size()<<endl;
            continue;
        }
         auto maxi=mp.rbegin();
        ll temp=maxi->first;
        ll sum=0;
        for(i=0;i<=temp+1;i++){
            if(mp.find(i)!=mp.end()){
                 sum=sum+mp[i];
            }
            else{
                sum=sum+s.size();
            }
        }
        cout<<sum<<endl;
        
    }
 
}
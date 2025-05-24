#include<bits/stdc++.h>
using namespace  std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,j;
        cin>>n>>k;
        string s;
        cin>>s;
        ll ans=INT_MAX,cnt=0,l=0,r,white=0,black=0;
        for(i=0;i<k;i++){
            if(s[i]=='W'){
                white++;
            }
            else{
                black++;
            }
        }
        ans=min(ans,white);
        for(i=k;i<s.size();i++){
            if(s[i]=='W'){
                white++;
            }
            else{
                black++;
            }
            if(s[l]=='W'){
                white--;
            }
            else{
                black--;
            }
            ans=min(ans,white);
            l++;
        }
        cout<<ans<<endl;
        
    }
}
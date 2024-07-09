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
        string s;
        cin>>s;
        ll ans=n+1;
        for(i=0;i<26;i++){
        ll l=0,r=n-1,cnt=0;
        while(l<=r){
            if(s[l]==s[r]){
                l++;
                r--;
            }
            else if(s[l]==char('a'+i))
            {
                l++;
                cnt++;
            }
            else if(s[r]==char('a'+i)){
                  r--;
                  cnt++;
            }
            else{
                cnt=n+1;
                break;
            }
        }
        ans=min(ans,cnt);
        }
        cout<<(ans==n+1?-1:ans)<<endl;
     }
 
}
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
        ll ans=n;
        for(i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                ans=ans+i;
            }
        }
        cout<<ans<<endl;
    }
}

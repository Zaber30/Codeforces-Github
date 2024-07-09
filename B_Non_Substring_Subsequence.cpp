#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q,i,j,k;
        cin>>n>>q;
        string s;
        cin>>s;
        for(j=0;j<q;j++){
            ll l,r,flag=0;
            cin>>l>>r;
            l--;
            r--;
            for(i=r+1;i<s.size();i++){
                if(s[r]==s[i]){
                    flag=1;
                    break;
                }
            }
            for(i=l-1;i>=0;i--){
                if(s[l]==s[i]){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}

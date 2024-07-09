#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
            ll n,i;
        cin>>n;
        string s;
        cin>>s;
        ll res=n-1;
        ll  cnt=0,cnt1=0;
        for(i=0;i<n;i++){
            if(s[i]=='>'||s[n-i-1]=='<'){
                res=min(res,i);
            }
        }
        cout<<res<<endl;
    }

}

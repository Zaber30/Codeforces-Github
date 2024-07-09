#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll cnt=0;
        for(ll i=0;i<s.size();i++){
            if((s[i]-'0')%2==0){
                cnt++;
            }
        }
            if(cnt==0){
                cout<<-1<<endl;
            }
            else if((s[s.size()-1]-'0')%2==0){
                cout<<0<<endl;
            }
            else if((s[0]-'0')%2==1&&(s[s.size()-1]-'0')%2==1){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }

    }
}

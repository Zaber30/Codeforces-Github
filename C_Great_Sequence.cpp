#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        multiset<ll>s;
        for(ll i=0;i<n;i++){
            ll temp;
            cin>>temp;
            s.insert(temp);
        }
        ll cnt=0;
        while(s.size()!=0){
            ll temp=*s.begin();
            if(s.find(temp*x)!=s.end()){
                s.erase(s.find(temp*x));
            }
            else{
                cnt++;
            }
            s.erase(s.find(temp));
        }
        cout<<cnt<<endl;
    }
}

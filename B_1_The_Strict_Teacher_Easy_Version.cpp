#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m>>q;
        ll a,b,qu,a1,b1;
        cin>>a>>b;
        cin>>qu;
        a1=min(a,b);
        b1=max(a,b);
        if(b1==qu||a1==qu){
            cout<<0<<endl;
        }
        else if(qu>=a1&&qu<=b1){
            cout<<(b1-a1)/2<<endl;
        }
        else if(qu<a1){
            cout<<a1-1<<endl;
        }
        else if(qu>b1){
            cout<<n-b1<<endl;
        }

    }
}

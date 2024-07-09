#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,sum,i,j,k;
    vector<ll>v;
    cin>>n;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(auto u:v){
        ll flag=1;
        for(i=2;i*i<=u;i++){
            if(u%(i*i)==0){
                flag=0;
            }
        }
        if(flag==1){
            cout<<u<<endl;
            break;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i=0,j=0;
        cin>>n>>k;
        vector<ll>v;
        if(n==1){
            cout<<k<<endl;
            continue;
        }
        while((pow(2,i+1)-1)<=k){
            i++;
        }
        v.push_back(pow(2,i)-1);
        ll temp=k-(pow(2,i)-1);
        v.push_back(temp);
        ll temp1=v.size();
        for(j=temp1+1;j<=n;j++){
            v.push_back(0);
        }
        for(j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;




    }
}


#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i,j,k;
        cin>>n>>m;
        string s;
        cin>>s;
        ll a[26]={0};
        for(i=0;i<s.size();i++){
            a[s[i]-'A']++;
        }
        ll sum=0;
        for(i=0;i<7;i++){
            if(a[i]<m){
                    sum+=(m-a[i]);

        }
        //cout<<sum<<endl;
    }
    cout<<sum<<endl;
    }
}



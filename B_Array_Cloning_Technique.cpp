#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,mx=0;
        cin>>n;
        ll a[n];
        map<ll,ll>mp;
        for(i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        ll temp=n-mx;
        ll temp1=mx;
        ll sum=0,cnt=0;
        while(sum<temp){

              sum=sum+mx;
              mx=mx*2;
              cnt++;



        }
        /*if(temp1==mx){
            cout<<0<<endl;
            continue;
        }*/
        cout<<cnt+temp<<endl;
    }
}

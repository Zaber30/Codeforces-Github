#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll i,j,k,n,sum=0;;
        cin>>n>>k;
        ll a[n];
        vector<ll>v;
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        for(i=0;i<n-1;i++){
            v.push_back(abs(a[i]-a[i+1]));
        }
        if(v.empty()){
            cout<<sum<<endl;
            continue;
        }
        sort(v.begin(),v.end(),greater<>());
       ll temp=min<ll>(v.size(),k);
       for(i=0;i<temp;i++){
        sum=sum-v[i];
       }
       cout<<sum<<endl;
       

    }
 
 
}
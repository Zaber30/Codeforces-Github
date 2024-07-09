#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){

        ll n,m,k;
        cin>>n>>m>>k;
        ll i,j,l;
        ll a[n],b[n]={0};
        vector<pair<ll,ll>>v;
        for(i=0;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],i});
        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++){
            ll mi=min(m,k);
            k=k-mi;
            b[v[i].second]=mi;


        }
        ll sum=0,sum1=0;
        for(i=0;i<n;i++){
                if(b[i]>0){
            sum1=sum1+(a[i]*b[i])+(sum*b[i]);
            sum=sum+b[i];}

        }
        cout<<sum1<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
 ll t;
 cin>>t;
 while(t--){
    ll n,i,j,k;
    cin>>n;
    vector<ll>a(n);
    ll pos=0,neg=0,zero=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            neg++;
        }
        else if(a[i]>0){
            pos++;
        }
        else{
            zero++;
        }
    }
    vector<pair<int,int>>v;
    if(pos+zero==n){
        for(i=1;i<n;i++){
            v.push_back({i, i-1});
            a[i]+=a[i-1];
        
        }
    }
    else if(neg+zero==n){
        for(i=n-2;i>=0;i--){
            v.push_back({i, i+1});
            a[i]+=a[i+1];
            //v.push_back({i,i+1});
        }
    }
    else{
        ll maxi=0;
        ll ind=max_element(a.begin(),a.end())-a.begin();
        for(i=0;i<n;i++){
            maxi=max(maxi,a[i]);
        }
        for(i=0;i<20;i++){
            v.push_back({ind,ind});
            maxi+=maxi;
        }
        v.push_back({0,ind});
        a[0]+=maxi;
        for(i=1;i<n;i++){
            while(a[i]<a[i-1]){
                a[i]+=a[i-1];
                v.push_back({i,i-1});
            }
        }
        cout<<v.size()<<endl;
        for(i=0;i<v.size();i++){
            cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
            
        }
    }
 }
 
}
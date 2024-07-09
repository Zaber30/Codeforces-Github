#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,cnt=0,sum=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
       ll mx=a[0];
       vector<ll>v;
        for(i=1;i<n;i++){
            if(a[i]<mx){
               v.push_back(mx-a[i]);
                cnt++;
            }
            mx=max(a[i],mx);


        }
        sort(v.begin(),v.end());
        ll temp=0;
        for(i=0;i<v.size();i++){
            v[i]=v[i]-temp;
            temp=temp+v[i];
            sum=sum+(v.size()-i+1)*v[i];
        }
        cout<<sum<<endl;

}
}

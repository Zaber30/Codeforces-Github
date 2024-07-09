#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(auto &i:a){
            cin>>i;
        }
        ll cnt=1,sum=0;
        sort(a.rbegin(),a.rend());
        for(i=0;i<a.size();i++){
            if(a[i]*cnt>=x){
                sum++;
                cnt=1;
            }
            else{
                cnt++;
            }
        }
        cout<<sum<<endl;
    }
 
}
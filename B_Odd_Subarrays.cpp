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
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        ll cnt=0;
        for(i=0;i<n-1;){
            if(a[i]>a[i+1]){
                cnt++;
                i=i+2;
            }
            else{
                i++;
            }
        }
        cout<<cnt<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll sum=0,n,i,j,k;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            sum=sum+abs(a[i]);
        }
        cout<<sum<<endl;
    }
}

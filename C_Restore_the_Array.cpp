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
        ll a[n],b[n];
        for(i=0;i<n-1;i++){
            cin>>a[i];
        }
        b[0]=a[0];
        for(i=1;i<n-1;i++){
            b[i]=min(a[i],a[i-1]);
        }
        b[n-1]=a[n-2];
        for(i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}

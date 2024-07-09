#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n+2],b[n+2]={0};
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
   ll mx=a[n];
    for(i=n-1;i>=1;i--)
    {
        if(mx>=a[i]){
            b[i]=(mx-a[i]+1);
        }
        else{
            mx=a[i];
        }
    }
    for(i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

}

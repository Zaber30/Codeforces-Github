#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n+2];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    ll mi=INT_MAX,temp,temp1;
    for(i=1;i<=n;i++){
        if(i==1||i==n){
            temp=(n-1);
            temp1=min(a[1],a[n]);
            mi=min(mi,temp1/temp);

        }
        else{
            temp=(i-1);
            temp1=min(a[1],a[i]);
            mi=min(mi,temp1/temp);
            temp1=min(a[i],a[n]);
            temp=(n-i);
            mi=min(mi,temp1/temp);

        }
    }
    cout<<mi<<endl;
}

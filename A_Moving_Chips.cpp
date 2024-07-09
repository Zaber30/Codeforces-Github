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
        ll a[n+1];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        ll temp1,temp2;
        for(i=1;i<=n;i++){
            if(a[i]==1){
                temp1=i;
                break;
            }
        }
        for(i=n;i>=1;i--){
            if(a[i]==1){
                temp2=i;
                break;
            }
        }
        ll cnt=0;
        for(i=temp1;i<=temp2;i++){
            if(a[i]==0){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

}

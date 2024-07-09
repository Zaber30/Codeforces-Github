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
        ll a[n+2];
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        ll mid=(n+2-1)/2;
        ll cnt=0;
        for(i=mid;i<=n;i++){
            if(a[i]==a[mid]){
                cnt++;
            }
            else{
                break;
            }
        }
        cout<<cnt<<endl;

    }

}

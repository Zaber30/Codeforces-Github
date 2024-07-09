#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,j;
        cin>>n>>k;
        for(i=1;i<=(log2(n)+1);i++){
            ll x=pow(2,i);
            ll y=(n+(x/2))/x;
            if(k<=y){
                if(k==1){
                    cout<<(x/2)<<endl;
                    break;
                }
                else{
                    ll ans=(x/2)+((k-1)*x);
                    cout<<ans<<endl;
                    break;
                }

            }
            else{
                k-=y;
            }
        }
    }
 
}
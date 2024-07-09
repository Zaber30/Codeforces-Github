#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q,i;
        cin>>n>>q;
        ll a[n+2],pref[n+2]={0},sum[n+2]={0};
        for(i=1;i<=n;i++){
            cin>>a[i];
            sum[i]=sum[i-1]+a[i];
            if(a[i]==1){
                pref[i]=pref[i-1]+1;
            }
            else{
                pref[i]=pref[i-1];
            }
        }
        for(i=0;i<q;i++){
            ll l,r;
            cin>>l>>r;
            ll cnt1,cnt2,cnt3;
            cnt1=(r-l+1);
            cnt2=pref[r]-pref[l-1];
            cnt3=(sum[r]-sum[l-1]);
            cnt3-=cnt1;
            if(cnt1==1){
                cout<<"NO"<<endl;
            }
            else{
                if(cnt3>=cnt2){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
        }

            }
        }
    }


#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
            ll n;
    cin>>n;
        ll a[n+2],pref[n+2],i,j,k,cnt=0;
        map<ll,ll>mp,mp1;
        for(i=1;i<=n;i++){
            cin>>a[i];
            mp[a[i]]++;
            while(mp[cnt]){
                cnt++;
            }
            pref[i]=cnt;
        }
        cnt=0;
        ll flag=-1;
        for(i=n;i>1;i--){
                mp1[a[i]]++;

            while(mp1[cnt]){
                cnt++;
            }
            if(pref[i-1]==cnt){
                flag=i-1;
            }

        }
        if(flag==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<flag<<endl;
            cout<<flag+1<<" "<<n<<endl;
        }

    }
}

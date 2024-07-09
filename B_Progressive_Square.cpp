#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,c,d,i,j,k,flag=0,mi=1e9+1;
        cin>>n>>c>>d;
        map<ll,ll>mp;
        for(i=0;i<(n*n);i++){
            ll temp;
            cin>>temp;
            mp[temp]++;
            mi=min(temp,mi);
        }

        for(i=0;i<n;i++){
            if(i==0){
                ll temp=mi;
                for(j=0;j<n;j++){
                    if(mp[temp]==0){
                        flag=1;
                    }
                    else{
                        mp[temp]--;
                    }

                    temp=temp+d;
                }
            }
            else{
                ll temp=mi+(i*c);
                for(j=0;j<n;j++){
                    if(mp[temp]<=0){
                        flag=1;
                    }
                    else{
                    mp[temp]--;}
                    temp=temp+d;
                }

            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


    }

}


#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,flag=0,i,j,sum=0,sum1=0;
        cin>>n>>k;
        vector<pair<ll,ll>>v;
        ll a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<0)
            {
                b[i]=(-1*b[i]);
            }
        }
        for(i=0;i<n;i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());
        ll temp;
        for(i=0;i<n;i++){
            sum=sum+v[i].second;
            if(i==0){
                sum1=sum1+(k*v[i].first);

            }
            else{

                  sum1=sum1+((v[i].first-v[i-1].first)*k);

            }
            if(sum>sum1)
            {
                flag=1;
                break;
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


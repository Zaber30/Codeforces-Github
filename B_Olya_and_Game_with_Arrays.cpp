#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll N=1e5;
vector<ll>v[N];
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k,m,min1=1e9,min2=1e9,sum=0;
        cin>>n;
        for(i=0;i<n;i++){
            v[i].clear();
            ll m;
            cin>>m;
            for(j=0;j<m;j++){
                ll num;
                 cin>>num;
                 v[i].push_back(num);
            }
        }
        for(i=0;i<n;i++){
            sort(v[i].begin(),v[i].end());
            sum=sum+v[i][1];
            min1=min(min1,v[i][0]);
            min2=min(min2,v[i][1]);

        }
        cout<<(sum-min2+min1)<<endl;
    }
}

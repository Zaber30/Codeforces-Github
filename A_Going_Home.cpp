#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    map<int,pair<int,int>>mp;
    int n,i,j,k;
    cin>>n;
    int a[n+2];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    n=min(2000,n);
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(mp.find(a[i]+a[j])!=mp.end()){
                if(mp[a[i]+a[j]].first!=i&&mp[a[i]+a[j]].first!=j&&mp[a[i]+a[j]].second!=i&&mp[a[i]+a[j]].second!=j){
                    cout<<"YES"<<endl;
                    cout<<mp[a[i]+a[j]].first<<" "<<mp[a[i]+a[j]].second<<" "<<i<<" "<<j<<endl;
                    return 0;
                }
            }
            else{
                mp[a[i]+a[j]]={i,j};
            }
        }
    }
    cout<<"NO"<<endl;
}

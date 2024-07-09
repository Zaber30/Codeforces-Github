#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,r,avg,i,j,k;
    cin>>n>>r>>avg;
    ll sum=0,sum1=0,l,r1,cost=0;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++){
        cin>>l>>r1;
        v.push_back({l,r1});
        sum=sum+l;
    }
    sum1=(n*avg);
    if(sum>=sum1){
        cout<<0<<endl;
        return 0;
    }

    sum1=(sum1-sum);
    sort(v.begin(),v.end(),[&](pair<ll,ll>&p1,pair<ll,ll>&p2)
         {
             return((p1.second<p2.second)||(p1.first==p2.first&&p1.second<p2.second));
         });
         for(i=0;i<v.size();i++){
                ll mi=r-v[i].first;
               mi=min(mi,sum1);
              sum1=sum1-mi;
              cost=cost+(v[i].second*mi);
         }
         cout<<cost<<endl;



}

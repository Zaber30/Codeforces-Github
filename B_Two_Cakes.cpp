#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int mi=2e5+2;
ll ind[2][mi],a[mi];
int main()
{
    ll n,i,j,k;
    cin>>n;
    for(i=1;i<=n*2;i++){
        cin>>a[i];
        if(ind[0][a[i]]==0){
            ind[0][a[i]]=i;
        }
        else{
            ind[1][a[i]]=i;
        }
    }
    ind[0][0]=1,ind[1][0]=1;
    ll sum=0;
    for(i=1;i<=n;i++){
        sum=sum+abs(ind[0][i]-ind[0][i-1])+abs(ind[1][i]-ind[1][i-1]);
    }
    cout<<sum<<endl;
}

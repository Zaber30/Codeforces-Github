#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll const maxn=1e6+3;
bool ind[maxn];
ll gcd_n[maxn];
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        ind[a[i]]=true;
    }
    ll cnt1=0;
    for(i=1;i<maxn;i++){
        for(j=i;j<maxn;j=j+i){
            if(ind[j]){
                gcd_n[i]=__gcd(gcd_n[i],j);
            }
        }
        if(gcd_n[i]==i){
            cnt1++;
        }
    }
    cout<<cnt1-n<<endl;

}

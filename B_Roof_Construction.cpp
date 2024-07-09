#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k=0;
        cin>>n;
        while(1<<(k+1)<=(n-1)){
            k++;
        }
        for(i=(1<<k)-1;i>=0;i--){
            cout<<i<<" ";
        }
        for(i=(1<<k);i<n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

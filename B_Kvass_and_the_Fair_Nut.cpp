#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll mi=INT_MAX,i,j,k,sum=0,sum1=0,n;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        mi=min(mi,a[i]);
        sum=sum+a[i];
    }
    if(sum<k){
        cout<<"-1"<<endl;
        return 0;
    }
    for(i=0;i<n;i++){
        sum1=sum1+abs(mi-a[i]);
    }
    if((k-sum1)<=0){
        cout<<mi<<endl;
    }
    else{
        sum1=(k-sum1);
        sum1=(sum1+n-1)/n;
        cout<<abs(mi-sum1)<<endl;

    }
}

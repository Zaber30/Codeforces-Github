#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,j;
        cin>>n>>k;
        ll a[n],pre[n]={0},suf[n+1]={0};
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                pre[i]=a[i];
            }
            else{
                pre[i]=pre[i-1]+a[i];
            }

        }
        for(i=n-1;i>=0;i--){
            if(i==n-1){
                suf[i]=a[i];
            }
            else{
                suf[i]=suf[i+1]+a[i];
            }
        }
        ll left=(k+2-1)/2;
        ll right=(k-left);
        ll sum=0,cnt=0;
        for(i=0;i<n;i++){

            if((sum+a[i])<=left){
                cnt++;
                sum=sum+a[i];
                 a[i]=0;

            }
            else{
                a[i]=(sum+a[i])-left;
                break;
            }
        }
        sum=0;
        for(i=n-1;i>=0;i--){
            if((sum+a[i])<=right&&a[i]!=0){
            cnt++;
            sum=sum+a[i];
            a[i]=0;
            }
            else{
                  break;
            }
        }
        cout<<cnt<<endl;

    }
}

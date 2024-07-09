#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,k,i,j,ma=0,temp2,temp1,l=0,cnt1=0,cnt2=0;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            cnt2++;
        }
        else{
            cnt1++;
        }
        while(cnt1>k){
            if(a[l]==0){
                cnt1--;
            }
            l++;
        }
        if((i-l+1)>ma){
            temp1=l;
            temp2=i;
            ma=(i-l+1);
        }
    }
    for(i=temp1;i<=temp2;i++){
        if(a[i]==0){
            a[i]=1;
        }
    }
    cout<<ma<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

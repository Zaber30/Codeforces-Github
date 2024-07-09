#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
    ll n,i,j,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            cnt++;
        }
    }
    if(cnt>1){
        cout<<"No"<<endl;
        continue;
    }
    ll flag=0;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            if(a[n-1]>a[0]){
                flag=1;
            }
        }
    }
    if(flag==1){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }

   }
 
}
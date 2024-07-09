#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
   ll t;
   cin>>t;
   while(t--){
    ll n,i,j,k;
    //ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
     ll a[n];
     for(i=0;i<n;i++){
        cin>>a[i];
     }
     ll cnt=0;
     for(i=0;i<n-2;i++){
        for(j=i+1;j<n-2;j++){
            if(a[i]!=a[j]&&a[i+1]==a[j+1]&&a[i+2]==a[j+2]){
                cnt++;
            }
            else if(a[i]==a[j]&&a[i+1]!=a[j+1]&&a[i+2]==a[j+2]){
                cnt++;
            }
            else if(a[i]==a[j]&&a[i+1]==a[j+1]&&a[i+2]!=a[j+2]){
                cnt++;
            }
        }
        
     }
     cout<<cnt<<endl;
   }
 
}
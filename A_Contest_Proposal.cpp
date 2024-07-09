#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
 ll t;
 cin>>t;
 while(t--){
    ll  n,i,j,k,cnt=0;
    cin>>n;
    ll a[n],b[n];
    
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(j=0;j<n;j++){
        cin>>b[j];
    }
    j=0;
     
    for(i=0;i<n&&j<n;i++){
        if(b[i]<a[j]){
            cnt++;
        }
        else{
            j++;
        }
    }
    cout<<cnt<<endl;

 }
 
}
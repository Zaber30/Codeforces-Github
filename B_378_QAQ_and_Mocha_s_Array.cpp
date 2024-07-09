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
     sort(a,a+n);
     if(n==1){
        cout<<"Yes"<<endl;
        continue;
     }
     ll temp=a[0],temp1=-1,flag=0;
     for(i=1;i<n;i++){
        if(a[i]%temp==0){
            continue;
        }
        else if(a[i]%temp!=0){
            if(temp1==-1){
                temp1=a[i];
            }
            else if(a[i]%temp1!=0){
                flag=1;
                break;
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
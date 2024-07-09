#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
      ll t;
      cin>>t;
      while(t--){
        ll n,i,j,k,temp,temp1;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(j=0;j<n;j++){
                i=0;
            while(pow(2,(i+1))<=a[j]){
                i++;
            }
            temp=abs(pow(2,i)-a[j]);
            temp1=abs(pow(2,i+1)-a[j]);
            ll sum=pow(2,i+1);
            ll sum1=pow(2,i);
            if(temp>=temp1){
                if(pow(2,i+1)>1000000000){
                    cout<<sum1<<" ";
                }
                else{
                    cout<<sum<<" ";
                }
            }
            else{
                cout<<sum1<<" ";
            }


        }
        cout<<endl;
      }
}

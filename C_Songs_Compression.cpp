#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   
   
     ll n,k;
      cin>>n>>k;
      vector<ll>v;
      ll i,j,sum=0;
      ll a[n],b[n];
      for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        v.push_back(a[i]-b[i]);
        sum=sum+a[i];
      }
      sort(v.rbegin(),v.rend());
      if(sum<=k){
        cout<<0<<endl;
        return 0;
      }
      else{
        sum=sum-k;
        ll cnt=0,sum1=0;
        for(i=0;i<v.size();i++){
            if(sum1>=sum){
                break;
            }
            else{
                sum1+=v[i];
                cnt++;
            }
        }
        if(sum1>=sum){
            cout<<cnt<<endl;
        }
        else{
            cout<<-1<<endl;
        }
      }    

   }
 

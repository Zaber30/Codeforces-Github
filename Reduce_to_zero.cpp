#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
      ll x,y,i,j,k;
      cin>>x>>y;
      if(x==0&&y==0){
           cout<<0<<endl;
      }
      else if(x==0||y==0){
        cout<<"-1"<<endl;
      }
      else{
        if(x>y){
            swap(x,y);
        }
        ll ans=0;
        while(x*2<=y){
            ans++;
            x=x*2;
        }
        if(x!=y){
            ans++;
        }
        cout<<y+ans<<endl;
      }
   }
 
}
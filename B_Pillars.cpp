#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
     ll n,i,j,k;
     cin>>n;
     ll a[n];
     for(i=0;i<n;i++){
        cin>>a[i];
     }
     ll b[n];
     for(i=0;i<n;i++){
        b[i]=(n-i);
     }
     ll ind=max_element(a,a+n)-a;
      j=ind,k=ind;
     bool ok=true;
     for(i=1;i<n;i++){
          if(a[j+1]==b[i]&&(j+1)<n){
            j++;
          }
          else if(a[k-1]==b[i]&&(k-1)>=0){
                  k--;
          }
          else{
            ok=false;
            break;
          }
     }
    /*if(ok==true){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }*/
     cout<<((ok==1)?"YES":"NO")<<endl;
 
}
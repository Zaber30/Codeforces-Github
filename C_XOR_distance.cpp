#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
     ll t;
     cin>>t;
     while(t--){
        ll a,b,r,i,j,k,sum=0;
        cin>>a>>b>>r;
        ll bit=-1;
        if(a<b){
            swap(a,b);
        }
        for(i=59;i>=0;i--){
            k=(1LL<<i);
            if((a&k)!=(b&k)){
                bit=i;
                break;
            }
        }
        for(i=bit-1;i>=0;i--){
            k=(1LL<<i);
            if(!(b&k)&&(a&k)&&(sum+k)<=r){
                sum=sum+k;
                a=a^k;
                b=b^k;
            }
        }
        cout<<(a-b)<<endl;
     }
 
}
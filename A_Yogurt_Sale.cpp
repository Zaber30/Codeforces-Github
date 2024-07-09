#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){

        ll n,a,b,sum=0,sum1=0;
        cin>>n>>a>>b;
         sum1=(n/2)*b;
         if(n%2==1){
            sum1=sum1+a;
         }
         sum=(n*a);
         cout<<min(sum1,sum)<<endl;

    }
}


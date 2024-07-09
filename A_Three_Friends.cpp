#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,i,j,k;
        cin>>a>>b>>c;
        ll sum=abs(a-b)+abs(a-c)+abs(b-c);
        for(i=-1;i<=1;i++){
            for(j=-1;j<=1;j++){
                for(k=-1;k<=1;k++){
                    ll na,nb,nc;
                    na=a+i;
                    nb=b+j;
                    nc=c+k;
                    sum=min(sum,abs(na-nb)+abs(na-nc)+abs(nb-nc));
                }
            }
        }
        cout<<sum<<endl;

    }
}

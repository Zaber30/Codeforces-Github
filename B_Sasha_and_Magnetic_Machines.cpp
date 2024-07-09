#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
     ll n,i,j,k,mi=101,sum=0,sum1=0;
     cin>>n;
     ll a[n+2],b[101]={0};
     for(i=0;i<n;i++){
        cin>>a[i];
        b[a[i]]++;
        mi=min(a[i],mi);
        sum=sum+a[i];

     }
     ll res=sum;
     for(i=1;i<=100;i++){
        if(b[i]==0||i==mi){
            continue;
        }
        for(j=1;j<=i;j++){
            ll cur=0;
            if(i%j!=0){
                continue;
            }
             cur=sum-mi-i;
            cur=cur+(mi*j)+(i/j);
            res=min(res,cur);
        }
     }
     cout<<res<<endl;

}

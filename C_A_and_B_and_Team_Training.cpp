#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,n1,m1,i,j,k,sum=0,sum1=0,temp,temp1,result=0;
    cin>>n>>m;

    ll cnt=0;
    while(n>0&&m>0)
    {
       if(n>m)
       {
           n=n-2;
           m=m-1;
           cnt++;
       }
       else
       {
          m=m-2;
          n=n-1;
          cnt++;
       }
    }
    if(n<0||m<0)
    {
        cnt--;
    }
    cout<<cnt<<endl;
}

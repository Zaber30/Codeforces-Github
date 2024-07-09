#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n,i,j,k,temp,temp1,temp2,x1,y1,sum=0,sum1=0,a1,b1;
        cin>>a>>b>>x>>y>>n;
        temp=n;
        a1=a;
        b1=b;
        temp1=min(a-x,temp);
        a1-=temp1;
        temp-=temp1;
        temp1=min(b-y,temp);
        b1-=temp1;
        sum=(a1*b1);
        temp1=min(b-y,n);
        b-=temp1;
        n-=temp1;
        temp1=min(a-x,n);
        a-=temp1;
        sum1=(a*b);
        cout<<min(sum,sum1)<<endl;







    }
}

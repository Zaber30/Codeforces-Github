#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,y,div1,div2,sum=0,sum1=0,k,kk=0,temp,temp2,temp3;
        cin>>n>>x>>y;
        div1=n/x;div2=n/y;
         ll temp1=(n*__gcd(x,y))/(x*y);
         div1-=temp1;
         div2-=temp1;
         temp=n-div1+1;
         sum=(temp+n)*(n-temp+1)/2;
        //sum=((div1/2)*((2*temp)+((div1-1)*1)));
        sum1=(div2*(div2+1))/2;
        cout<<sum-sum1<<endl;





    }
}

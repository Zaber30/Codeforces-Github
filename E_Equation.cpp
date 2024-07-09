#include<bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
bool func(ld mid,ld c)
{
    return(((mid*mid)+sqrt(mid))>=c);
}
int main()
{
    ld c,i,j,k;
    cin>>c;
    ld lo=0,hi=c,mid;
    ll p=60;
    while(p--)
    {
        mid=(lo+hi)/2;
        if(func(mid,c))
        {
            hi=mid;
        }
        else
        {
            lo=mid;
        }
    }
    cout<<setprecision(10)<<hi<<endl;
}

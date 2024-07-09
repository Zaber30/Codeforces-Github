#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,r,s,t,sum=0;
    cin>>n;
    p=n/5;
    sum=sum+p;
    n=n%5;
    q=n/4;
    sum=sum+q;
    n=n%4;
    r=n/3;
    sum=sum+r;
    n=n%3;
    s=n/2;
    sum=sum+s;
    n=n%2;
    t=n/1;
    sum=sum+t;
    cout<<sum<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,s,t,sum=0;
    int n;
    cin>>n;
    p=n/100;
    sum=sum+p;
    n=n%100;
    q=n/20;
    sum=sum+q;
    n=n%20;
    r=n/10;
    sum=sum+r;
    n=n%10;
    s=n/5;
    sum=sum+s;
    n=n%5;
    t=n/1;
    sum=sum+t;
    cout<<sum<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    long long int sum=0;
    if(k2<=k5&&k2<=k6)
    {
        sum=sum+k2*256;
        k2=abs(k2-k2);
    }
    else if(k5<=k2&&k5<=k6)
    {
        sum=sum+k5*256;
        k2=abs(k2-k5);
    }
    else if(k6<=k2&k6<=k5)
    {
        sum=sum+k6*256;
        k2=abs(k2-k6);
    }
    if(k2>=k3)
    {
        sum=sum+k3*32;
    }
    else
    {
        sum=sum+k2*32;
    }
    cout<<sum<<endl;

}

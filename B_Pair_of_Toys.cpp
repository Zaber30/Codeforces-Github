#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,k,temp,temp1;
    cin>>n>>k;
    temp=k/2;
    temp=temp+1;
    ll ans;
    if(n<temp)
    {
        cout<<"0"<<endl;
        return 0;
    }
    if(min(n,k)==k)
    {
        cout<<(k-temp)<<endl;
    }
    else
    {
        cout<<abs(n-temp+1)<<endl;
    }

}

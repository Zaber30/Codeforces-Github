#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    //ll a[n];
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        if(sum<=a[i])
        {
            cnt++;
            sum=sum+a[i];
        }

    }
    cout<<cnt<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define pi acos(-1);
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll sum,pow=1;
        sum=n*(n+1)/2;
        while(pow<=n)
        {
            sum=sum-(2*pow);
            pow=pow<<1;

        }
        cout<<sum<<endl;
    }
}

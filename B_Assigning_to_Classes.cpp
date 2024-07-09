#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        cout<<(a[(2*n)/2]-a[((2*n)/2)-1])<<endl;
    }
}

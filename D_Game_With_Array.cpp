#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,s,i,j,k;
    cin>>n>>s;
    if(s/n==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=1;i<n;i++)
        {
            cout<<"2"<<" ";
        }
        ll sum=(s-(2*(n-1)));
        cout<<sum<<endl;
        cout<<"1"<<endl;
    }
}

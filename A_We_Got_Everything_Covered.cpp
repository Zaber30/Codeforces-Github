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
        cin>>n>>k;
        ll sum=(n*k);
        for(i=0;i<n;i++)
        {
            for(j=0;j<k;j++)
            {
                cout<<(char)(j+'a');
            }
        }
        cout<<endl;

    }
}

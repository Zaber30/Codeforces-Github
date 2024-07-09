#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        ll i,n,sum=0;
        cin>>n;
        sum=(n*(n+1))/2;
        sum=sum%n;
        if(sum==0)
        {
            for(i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<sum+1<<" ";
            for(i=2;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll i,j;
        if(n%2==0)
        {
            for(i=1;i<=n-2;i=i+2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n-1<<" "<<n<<endl;
        }
        else if(n%3==0)
        {   cout<<"1"<<" ";
            for(i=2;i<=n-2;i=i+2)
            {
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n-1<<" "<<n<<endl;

        }
        else if(n%3==1)
        {
            for(i=1;i<=n-4;i++)
            {
                cout<<i<<" ";
            }
            cout<<n-2<<" "<<n-3<<" "<<n-1<<" "<<n<<endl;
        }
        else if(n%3==2)
        {
            for(i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}

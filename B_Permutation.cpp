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
        ll i,j,k;
        cout<<"2"<<endl;
        for(i=1;i<=n;i++)
        {
           if(i%2!=0)
           {
               for(j=i;j<=n;j=j*2)
               {
                   cout<<j<<" ";
               }
           }

        }
        cout<<endl;
    }
}

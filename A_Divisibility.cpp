#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll a,b,k;
    cin>>k>>a>>b;
    ll cnt=0;
    if(a==0&&b==0)
    {
        cout<<"1"<<endl;
    }
    else if(b>0)
    {
        if(a<=0)
        {
            cout<<b/k+(-a/k)+1<<endl;
        }
         else
         {
             if(a%k==0)
             {
                 cout<<(b/k-a/k)+1<<endl;
             }
             else
             {
                 cout<<b/k-a/k<<endl;
             }
         }
    }
    else
    {
        if(b%k==0)
        {
            cout<<(-a/k)-(-b/k)+1<<endl;
        }
        else
        {
            cout<<(-a/k)-(-b/k)<<endl;
        }
    }
}

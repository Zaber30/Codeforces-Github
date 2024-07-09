#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,k,odd,even;
        cin>>l>>r>>k;
        ll sum=0,sum1=0;
        if(l==r)
        {
            if(l==r&&l==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            odd=(r+2-1)/2;
            odd=odd-(l-1+2-1)/2;
            even=(r/2);
            even=even-(l-1)/2;
            if(odd<=k)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}

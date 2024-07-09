#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi acos(-1);
using ll=long long;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%2==0||n%k==0)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2==k)
        {
            cout<<"YES"<<endl;
        }
        else if(n%k==2)
        {
            cout<<"YES"<<endl;
        }
        else if((n-k)%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if((n-2)%k==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}

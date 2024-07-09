#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll i,j;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll a[k];
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<k;i++){
     auto it=upper_bound(v.begin(),v.end(),a[i]);
     if(it==v.end())
     {
         cout<<n<<endl;
     }
     else
     {
         cout<<it-v.begin()<<endl;
     }
    }

}

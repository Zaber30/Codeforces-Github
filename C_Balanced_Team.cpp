#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    vector<ll>v(n);
    for(auto &i:v)
    {
        cin>>i;
    }
    sort(v.begin(),v.end());
    ll mx=0,cnt=1,l=0;
    for(i=1;i<v.size();i++)
    {
        while((v[i]-v[l])>5)
        {
            l++;
        }
        mx=max(mx,i-l+1);
    }
    mx=max(cnt,mx);
    cout<<mx<<endl;
}

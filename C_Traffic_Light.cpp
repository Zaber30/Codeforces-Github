#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n,i,j,k;
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    s+=s;
    ll mi=INT_MAX,ma=INT_MIN;
    for(i=0;i<2*n;i++)
    {
        if(s[i]==ch)
        {
            mi=min(mi,i);
        }
        if(s[i]=='g')
        {
            ma=max(i-mi,ma);
            mi=INT_MAX;
        }
    }
    cout<<ma<<endl;
    }
}

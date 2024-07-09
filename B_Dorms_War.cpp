#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{   ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,a[26]={0};
        cin>>n;
        string s;
        cin>>s;
        ll m;
        cin>>m;
        char ch;
        for(i=0;i<m;i++)
        {
            cin>>ch;
            a[ch-'a']++;
        }
        ll temp=0,k=0;
        //vector<ll>v;
        for(i=0;i<s.size();i++)
        {
            if((a[s[i]-'a']>=1&&k==0))
            {
                   //v.push_back(i);
                   temp=max<ll>(temp,i);
                   k=i;
            }
            else if((a[s[i]-'a']>=1)&&(i-k)==1)
            {
                temp=max<ll>(temp,1LL);
                //v.push_back(1);
                k=i;
            }
            else if((a[s[i]-'a']>=1))
            {
                //v.push_back(i-k);
                temp=max<ll>(temp,i-k);
                k=i;
            }
        }
        cout<<temp<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,k,i;
    cin>>n>>k;
     vector<ll>v(n);
     set<ll>s;
     for(i=0;i<n;i++)
     {
         cin>>v[i];
         s.insert(v[i]);
     }
     sort(v.begin(),v.end());
     if(k==1)
     {
         cout<<n<<endl;
         return 0;
     }
     for(auto i:v)
     {
         if(s.find(i)!=s.end()&&s.find(i*k)!=s.end())
         {
             s.erase(i*k);
         }
     }
     cout<<s.size()<<endl;

}

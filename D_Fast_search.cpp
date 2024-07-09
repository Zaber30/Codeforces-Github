#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{

        ll n,i,j;
        cin>>n;
        vector<ll>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll t;
        cin>>t;
        while(t--)
        {
            ll l,r;
            cin>>l>>r;
            ll l1,r1;
            auto it=lower_bound(v.begin(),v.end(),l);
            auto it1=upper_bound(v.begin(),v.end(),r);
            if(it==v.end())
            {
               l1=n;
            }
            else
            {
                l1=it-v.begin();

            }
            r1=it1-v.begin();
            cout<<r1-l1<<endl;

        }






}

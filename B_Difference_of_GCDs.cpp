#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        vector<int>v;
        int n,l,r,ses,cnt=0,j;
        cin>>n>>l>>r;
        for(j=1;j<=n;j++)
        {
            if(__gcd(l,j)==j)
            {
                v.push_back(l);
            }
            else
            {
                ses=l%j;
                if(l+(j-ses)<=r)
                {
                    v.push_back((l+(j-ses)));
                }
                else
                {
                    cnt=2;
                    break;
                }

            }
        }
        if(cnt==2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(j=0;j<v.size();j++)
            {
                cout<<v[j]<<" ";
            }
            cout<<endl;
        }
    }
}

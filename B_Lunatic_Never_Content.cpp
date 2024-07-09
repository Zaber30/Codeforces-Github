#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>v;
        for(i=0;i<n/2;i++)
        {
           v.push_back(abs(a[i]-a[n-i-1]));
        }
        if(v.size()==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int gcd=v[0];
            for(i=1;i<v.size();i++)
            {
                gcd=__gcd(gcd,v[i]);
            }
            cout<<gcd<<endl;
        }
    }
}

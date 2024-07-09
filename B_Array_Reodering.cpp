#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        int i,j,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                v.push_back(a[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                v.push_back(a[i]);
            }
        }
        int cnt=0;
        for(i=0;i<v.size()-1;i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                if(__gcd(v[i],2*v[j])>1)
                {
                    cnt++;
                }
            }


        }
        cout<<cnt<<endl;
    }
}

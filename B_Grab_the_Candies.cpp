#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,sum=0,sum1=0,cnt=0;
        vector<int>v,l;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
            {
                v.push_back(a[j]);
            }
            else
            {
                l.push_back(a[j]);
            
            }
        }
        sort(v.begin(),v.end());
        sort(l.begin(),l.end());
        if(v.size()>=l.size())
        {
            for(j=0;j<v.size();j++)
            {
                sum=sum+v[j];
                sum1=sum1+l[j];
                if(sum>sum1)
                {
                    cnt=1;
                }
                else
                {
                    cnt=0;
                }
            }
        }
        else
        {
            for(j=0;j<l.size();j++)
            {
                sum=sum+v[j];
                sum1=sum1+l[j];
                if(sum>sum1)
                {
                    cnt=1;
                }
                else
                {
                    cnt=0;
                }
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}
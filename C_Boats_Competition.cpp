#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,l,r,sum,res=0;
        map<int,int>mp;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(i=2;i<=2*50;i++)
        {
            l=0,r=n-1;
        while(l<r)
        {
            sum=a[l]+a[r];

            if(sum==i)
            {
                mp[i]++;
                l++;
                r--;
            }
            else if(sum<i)
            {
                l++;
            }
            else
            {
                r--;

            }

        }


    }
    for(i=2;i<=50*2;i++)
    {
        res=max(res,mp[i]);
    }
    cout<<res<<endl;
    }
}

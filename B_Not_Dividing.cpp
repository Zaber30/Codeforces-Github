#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[j]==1)
            {
                a[j]=a[j]+1;
            }
        }
        for(j=1;j<n;j++)
        {
            if(a[j]%a[j-1]==0)
            {
                a[j]=a[j]+1;
            }
        }
        for(j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

}


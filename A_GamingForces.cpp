#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int cnt1=0,cnt2=0,sum=0,mot=0;
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
                cnt1++;
            }
            else if(a[j]==2)
            {
                cnt2++;

            }
            else
            {
                sum=sum+1;
            }
        }
        if(cnt1==1)
        {
            sum=sum+1;
        }
        if(cnt2==1)
        {
            sum=sum+1;
        }
        if(cnt1%2==0&&cnt1!=1)
        {
            sum=sum+(cnt1/2);
        }
        if(cnt1%2!=0&&cnt1!=1)
        {
            sum=sum+1+(cnt1/2);
        }
        if(cnt2%2==0&&cnt2!=1)
        {
            sum=sum+cnt2;
        }
        if(cnt2%2!=0&&cnt2!=1)
        {
            sum=sum+cnt2;
        }
        cout<<sum<<endl;

    }

}

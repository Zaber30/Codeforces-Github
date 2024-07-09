#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,sum=0,cnt=0,k;
        cin>>n;
        int a[n+2];
        for(j=1;j<=n;j++)
        {
            cin>>a[j];
        }
        for(j=1;j<=n;j++)
        {
            if(a[j]==-1&&a[j+1]==-1)
            {
                sum=sum+2;
                j=j+2;
                cnt++;
                break;
            }
            else
            {
                sum=sum+a[j];
            }
        }
        for(k=j;k<=n;k++)
        {
            sum=sum+a[k];
        }
        if(sum!=n||cnt==1)
        {
            cout<<sum<<endl;
        }
        else if(sum==2)
        {
            cout<<-2<<endl;
        }
        else if(sum==3)
        {
            cout<<-1<<endl;
        }
        else if(sum>3&&sum==n)
        {
            cout<<((n-2)-2)<<endl;
        }

    }
}

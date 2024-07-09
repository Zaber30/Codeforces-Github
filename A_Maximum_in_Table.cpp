#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1][n+1]={0};
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=1;j++)
        {
            a[i][j]=1;
        }
    }
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[n][n]<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
     char a[n+3][m+3];
     int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j]=='W')
            {
                if(a[i-1][j]=='P')
                {
                    cnt++;
                    //a[i-1][j]='.';
                }
                else if(a[i+1][j]=='P')
                {
                    cnt++;
                    //a[i+1][j]='.';
                }
                else if(a[i][j-1]=='P')
                {
                    cnt++;
                    //a[i][j-1]='.';
                }
                else if(a[i][j+1]=='P')
                {
                    cnt++;
                    //a[i][j+1]='.';
                }
            }
        }
    }
    cout<<cnt<<endl;
}

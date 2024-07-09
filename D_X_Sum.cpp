#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m],i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int ans=0,sum=0;
        for(i=0;i<n;i++)
        {
            //int sum=0;
            for(j=0;j<m;j++)
            {
                 sum=0;
                int r=i,c=j;
                while(r<n&&c<m)
                {
                    sum=sum+a[r][c];
                    r++;
                    c++;
                }
                r=i,c=j;
                while(r>=0&&c>=0)
                {
                    sum=sum+a[r][c];
                    r--;
                    c--;
                }
                r=i,c=j;
                while(r<n&&c>=0)
                {
                    sum=sum+a[r][c];
                    r++;
                    c--;

                }
                r=i,c=j;
                while(c<m&&r>=0)
                {
                    sum=sum+a[r][c];
                    c++;
                    r--;
                }
                sum=sum-(3*a[i][j]);
                ans=max(ans,sum);

            }
            //sum=sum-(3*a[i][j]);
            //ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
}

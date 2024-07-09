#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k;
        int n,m;
        cin>>n>>m;
        int a[n][m],cnt=0,sum=0,mini=10000;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                if(a[i][j]<0)
                {
                    cnt++;
                }
                sum=sum+abs(a[i][j]);
                mini=min(mini,abs(a[i][j]));
            }
        }
        if(cnt%2==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<(sum-(2*mini))<<endl;
        }
    }
}

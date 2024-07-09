#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j,k;
    char a[n][m],x;
    vector<char>v;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            int cnt=0;
             x=a[i][j];
            for(k=0;k<m;k++)
            {
                if(a[i][k]==x)
                {
                    cnt++;
                }
            }
            for(k=0;k<n;k++)
            {
                if(a[k][j]==x)
                {
                    cnt++;
                }

            }
            if(cnt>2)
            {
                continue;
            }
            v.push_back(x);
        }
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
}

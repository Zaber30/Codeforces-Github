#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    char ch;
    vector<char>v;
    cin>>n>>m>>ch;
    char a[n+3][m+3];
     for(i=0;i<=n+1;i++)
     {
         for(j=0;j<=m+1;j++)
         {
             if(i==0||j==0||i==(n+1)||j==(m+1))
             {
                 a[i][j]='.';
             }
         }
     }
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
            if(a[i][j]==ch)
            {
                if(a[i-1][j]!='.')
                {
                    v.push_back(a[i-1][j]);
                }
                if(a[i+1][j]!='.')
                {
                    v.push_back(a[i+1][j]);
                }
                if(a[i][j+1]!='.')
                    {
                        v.push_back(a[i][j+1]);
                    }
                    if(a[i][j-1]!='.')
                    {
                        v.push_back(a[i][j-1]);
                    }
            }
        }
    }
    int cnt=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==ch)
        {
            cnt++;
            break;
        }
    }
    sort(v.begin(),v.end());
    cout<<(unique(v.begin(),v.end())-v.begin())-cnt<<endl;

}

#include<bits/stdc++.h>
using namespace std;
bool prime[10000000];

void seive()
{
    prime[0]=true;
    prime[1]=true;
    int i,j,sq;
    sq=sqrt(10000000);
    for(i=2;i<=sq;i++)
    {
        if(prime[i]==false)
        {
            for(j=i*i;j<=10000000;j=j+i)
            {
                prime[j]=true;
            }
        }
    }
}
int main()
{
   seive();
  int n,m,i,j;
  cin>>n>>m;
  int ans1=INT_MAX,ans2=INT_MAX,ans3=0,cnt;
  int a[n][m];
  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          cin>>a[i][j];
      }
  }
  int sum=0;
  for(i=0;i<n;i++)
  {
      sum=0;
      for(j=0;j<m;j++)
      {
          cnt=0;
          while(1)
          {
              if(prime[a[i][j]]==false)
              {
                  a[i][j]=a[i][j]-cnt;
                  sum=sum+cnt;
                  break;
              }
              else
              {
                  a[i][j]=a[i][j]+1;
                  cnt=cnt+1;
              }
          }

      }
      ans1=min(ans1,sum);
  }

  for(i=0;i<m;i++)
  {
      sum=0;
      for(j=0;j<n;j++)
      {
          cnt=0;
          while(1)
          {
              if(prime[a[j][i]]==false)
              {
                  a[j][i]=a[j][i]-cnt;
                  sum=sum+cnt;
                  break;
              }
              else
              {
                  a[j][i]=a[j][i]+1;
                  cnt=cnt+1;
              }
          }

      }
      ans2=min(ans2,sum);
  }
  ans3=min(ans2,ans1);
  cout<<ans3<<endl;


}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll const h=1000;

int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    ll a[n+2]={0};
    vector<int>v;
    ll i,j;
    ll sq=sqrt(n+2);
     for(i=2;i<=sq;i++)
     {
         if(a[i]==0)
        {
         for(j=i*i;j<=n;j=j+i)
         {
             a[j]=1;
         }

         }
     }
     for(i=2;i<=n;i++)
     {
         if(a[i]==0)
         {
             v.push_back(i);
         }
     }

      for(i=1;i<v.size();i++)
      {
          int sum=((v[i]+v[i-1])+1);
          if(a[sum]==0&&sum<=n)
          {
              cnt++;
          }
      }
      //cout<<cnt<<endl;
      if(cnt>=m)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
}

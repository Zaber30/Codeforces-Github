#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i,flag=0,cnt=0;
    cin>>n>>m;
    ll a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    if(a[0]==1||a[m-1]==n)
    {
        cout<<"NO"<<endl;
    }
    else
        {
           for(i=1;i<m;i++)
           {
               if((a[i]-a[i-1])<2)
                  {
                      cnt++;
                      if(cnt==1&&i>=2&&((a[i]-a[i-2])==2))
                      {
                          flag=1;

                      }
                      else
                      {
                          cnt=0;
                      }

                  }
           }
           if(flag==1)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               cout<<"YES"<<endl;
           }
        }

}


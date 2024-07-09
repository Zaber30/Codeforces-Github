#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
  ll n;
  cin>>n;
  ll a[n+2],sum=0,i;
  for(i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  sum=sum+a[1];
  for(i=2;i<=n;i++)
  {
      sum=sum+a[i];
      sum=sum+((a[i]-1)*(i-1));
  }
  cout<<sum<<endl;

}

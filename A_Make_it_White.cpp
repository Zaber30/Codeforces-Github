#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,num,num1;
      cin>>n;
      string s;
      cin>>s;
      ll i;
      for(i=0;i<s.size();i++)
      {
          if(s[i]=='B')
          {
              num=i;
              break;
          }
      }
      for(i=s.size()-1;i>=0;i--)
      {
          if(s[i]=='B')
          {
              num1=i;
              break;
          }
      }
      ll sum=abs(num-num1)+1;
      cout<<sum<<endl;

  }

}


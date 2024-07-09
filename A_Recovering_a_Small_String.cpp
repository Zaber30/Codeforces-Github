#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll n,i,j,k;
      cin>>n;
      if(n<=28)
      {
          string s="";
          s=s+'a';
          s=s+'a';
          s=s+(char)(n-3+'a');
          cout<<s<<endl;
      }
      else if(n<=52)
      {
          string s="";
          s=s+'z';
          n=n-26;
           s=s+(char)(n-2+'a');
           s=s+'a';
           reverse(s.begin(),s.end());
           cout<<s<<endl;

      }
      else
      {
          string s="";
          s=s+'z';
          s+='z';
          n=n-52;
          s=s+(char)(n-1+'a');
          reverse(s.begin(),s.end());
          cout<<s<<endl;
      }
  }
}


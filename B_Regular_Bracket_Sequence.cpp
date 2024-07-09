#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  stack<char>st;
  int cnt=0,i;
  for(i=0;i<s.size();i++)
  {
      if(s[i]=='(')
      {
          st.push(s[i]);
      }
      else if(s[i]==')'&&st.size()!=0)
      {
          cnt=cnt+2;
          st.pop();
      }

  }
  cout<<cnt<<endl;
}

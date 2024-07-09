#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){

     ll n,i,j,k;
     cin>>n;
     string s;
     set<char>s1;
     cin>>s;
     if(n>26){
        cout<<-1<<endl;
        return 0;
     }
      for(i=0;i<s.size();i++){
        s1.insert(s[i]);
      }
      cout<<n-s1.size()<<endl;
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
    ll r;
    cin>>r;
    while(r--){
        string s,t,p;
        ll n,i,j,k;
        cin>>s;
        cin>>t;
        cin>>p;
        ll a[26]={0};
        if(s.size()>t.size()){
            cout<<"NO"<<endl;
            continue;
        }
        for(i=0;i<p.size();i++){
            a[p[i]-'a']++;
        }
        j=0;
        bool ok=true;
        vector<char>v;
        for(i=0;i<t.size();i++){
              if(t[i]==s[j]){
                j++;
                
              }
              else if(a[t[i]-'a']>=1){
                a[t[i]-'a']--;
                

              }
              else{
                ok=false;
              }
              
        }
        if(j<s.size()||ok==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    
 
}
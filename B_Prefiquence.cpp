#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
 ll t;
 cin>>t;
 while(t--){
    ll n,m,i=0,k,j=0;
    cin>>n>>m;
    string s,s1;
    cin>>s;
    cin>>s1;
    ll cnt=0;
    for(i=0;i<n&&j<m;){
        if(s[i]==s1[j]){
            i++;
            j++;
            cnt++;
        }
        else{
            j++;
        }
    }
    cout<<cnt<<endl;
 }
 
 
}
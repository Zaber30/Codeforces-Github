#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool check(ll a[],ll mid,string s,string s1){
   unordered_set<ll>hs;
   ll i,j,k;
   for(i=0;i<mid;i++){
    hs.insert(a[i]);
   }
   string res="";
   for(i=0;i<s.size();i++){
    if(hs.find(i)==hs.end()){
        res+=s[i];
    }
   }
   ll p1=0,p2=0;
   while(p1<res.length()&&p2<s1.length()){
      if(res[p1]==s1[p2]){
        p1++;
        p2++;
      }
      else{
        p1++;
      }
   }
   return (p2==s1.length());
}
int main()
{
     
        string s,s1;
        cin>>s;
        cin>>s1;
        ll i,j,k;
        ll n=s.size();
        ll a[n];
        for(i=0;i<s.size();i++){
            cin>>a[i];
            a[i]-=1;
        }
        ll lo=0,hi=n;
        while(lo<hi){
            ll mid=(lo+hi)/2;
            if(check(a,mid,s,s1)){
                lo=mid+1;
            }
            else{
                hi=mid;
            }
        }
        cout<<lo-1<<endl;
     
}
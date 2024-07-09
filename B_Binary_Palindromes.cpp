#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
       ll n,i,j,k,zero=0,one=0;
       cin>>n;
       string s[n];
       for(i=0;i<n;i++){
            cin>>s[i];
       }
       for(i=0;i<n;i++){
          for(j=0;j<s[i].size();j++){
            if(s[i][j]=='0'){
                zero++;
            }
            else{
                one++;
            }
          }
       }
       ll cnt=0;
       for(i=0;i<n;i++){
        if(s[i].size()%2==0){
            for(j=2;j<=s[i].size();j+=2){
                if(zero>=(s[i].size()-j)&&one>=j){
                    cnt++;
                    one-=j;
                    zero-=(s[i].size()-j);
                    break;

                }
                else if(one>=(s[i].size()-j)&&zero>=j){
                    cnt++;
                    zero-=j;
                    one-=(s[i].size()-j);
                    break;

                }

                
            }

        }
        else{
            for(j=1;j<=s[i].size();j+=2){
                if(zero>=(s[i].size()-j)&&one>=j){
                    cnt++;
                    one-=j;
                    zero-=(s[i].size()-j);
                    break;

                }
                else if(one>=(s[i].size()-j)&&zero>=j){
                    cnt++;
                    zero-=j;
                    one-=(s[i].size()-j);
                    break;

                }

        }
       }
       
   }
   cout<<cnt<<endl;
 
}
}
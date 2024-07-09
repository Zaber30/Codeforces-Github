#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
    while(t--){
    ll n,i,j,k;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=0;
    for(i=0;i<200;i++){
        if(s.empty()){
            break;
        }
       else if(s.size()==1){
        ll temp;
              if(s[0]=='U'){
                cnt++;
                temp=0;
                s.erase(temp,1);
                
              }
        }
        else if(s.size()==2){
            ll temp;
             
             if(s[0]=='U'){
                temp=0;
                s.erase(temp,1);
                cnt++;
             }
             else if(s[1]=='U') {
                 temp=1;
                 s.erase(temp,1);
                 cnt++;
             }
        }
        else{
            for(j=0;j<s.size();j++){
                if(s[j]=='U'&&j==0){
                    if(s[j+1]=='U'){
                        s[j+1]='D';
                    }
                    else{
                        s[j+1]='U';

                    }
                    if(s[s.size()-1]=='U'){
                        s[s.size()-1]='D';
                    }
                    else{
                        s[s.size()-1]='U';
                    }
                    cnt++;
                    s.erase(j,1);
                }
                else if(s[j]=='U'&&j==s.size()-1){
                    if(s[0]=='U'){
                        s[0]='D';
                    }
                    else{
                        s[0]='U';
                    }
                    if(s[j-1]=='U'){
                        s[j-1]='D';
                    }
                    else{
                        s[j-1]='U';
                    }
                    cnt++;
                    s.erase(j,1);
                }
                else{
                    if(s[j]=='U'){
                    if(s[j+1]=='U'){
                        s[j+1]='D';
                    }
                    else{
                        s[j+1]='U';

                    }
                    if(s[j-1]=='U'){
                        s[j-1]='D';
                    }
                    else{
                        s[j-1]='U';
                    }
                    cnt++;
                    s.erase(j,1);
                }
                }
            }
        }

    }
    if(cnt%2==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
 
}
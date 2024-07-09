#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
   ll t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       if(is_sorted(s.begin(),s.end())){
        cout<<1<<endl;
        continue;
       }
       ll i,j,k,cnt=0,lnt=0,temp1=-1,temp2=-1,mx=0,tnt=0;
       for(i=0;i<s.size()-1;i++){
          if(s[i]=='0'&&s[i+1]=='1'){
               j=i;
               while(s[j-1]=='0'&&(j-1)>=0){
                j--;
               }
               k=i+1;
               while(s[k+1]=='1'&&(k+1)<s.size()){
                k++;
               }
               if(k-j+1>mx){
                mx=k-j+1;
                temp1=j;
                temp2=k;
               }
               

          }
       }
       if(temp1==-1&&temp2==-1){
        for(i=0;i<s.size();){
            if(s[i]!=s[i+1]&&(i+1)<s.size()){
                cnt=cnt+2;
                i=i+2;
            }
            else if(i==s.size()-1&&s[i]!=s[i-1]&&(i-1)>=0){
               cnt++;
               i++;
            }
            else{
                i++;
            }
            
        }
        cout<<cnt<<endl;

       }
       else{
       for(i=0;i<temp1;){
          if(s[i]!=s[i+1]&&(i+1)<temp1){
            lnt=lnt+2;
            i=i+2;
          }
          else if(i==temp1-1&&s[i]!=s[i-1]&&(i-1)>=0){
            lnt++;
            i++;
          }
          else{
            
            i++;
          }
       }
       if(lnt==0&&temp1!=0){
        lnt++;
       }
      
       for(i=temp2+1;i<s.size();){
        if(s[i]!=s[i+1]&&(i+1)<s.size()){
            tnt=tnt+2;
            i=i+2;
            

        }
        else if(i==s.size()-1&&s[i]!=s[i-1]&&(i-1)>=0){
            tnt++;
            i++;
        }
        else{
            
            i++;
        }
       }
       if(tnt==0&&temp2!=s.size()-1){
        tnt++;
       }
       cnt++;
       
       cout<<cnt+lnt+tnt<<endl;
       }
       
   }
 
}
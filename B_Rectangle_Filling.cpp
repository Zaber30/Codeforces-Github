#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
       ll t;
       cin>>t;
       while(t--){
        ll n,m,i,j,k;
        cin>>n>>m;
        char ch[n][m];
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>ch[i][j];
            }
        }
        if(ch[0][0]==ch[n-1][m-1]){
            cout<<"YES"<<endl;
            continue;
        }
        ll cnt=0;
        for(j=1;j<m;j++){
            if(ch[0][0]!=ch[0][j]){
                cnt++;
                break;
            }
        }
        for(i=1;i<n;i++){
            if(ch[0][0]!=ch[i][0]){
                cnt++;
                break;
            }
        }
        ll lnt=0;
        for(j=m-2;j>=0;j--){
            if(ch[n-1][m-1]!=ch[n-1][j]){
                lnt++;
                break;
            }
        }
        for(i=n-2;i>=0;i--){
            if(ch[n-1][m-1]!=ch[i][m-1]){
                lnt++;
                break;
            }
        }
        if(cnt>=2||lnt>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
       }
 
}
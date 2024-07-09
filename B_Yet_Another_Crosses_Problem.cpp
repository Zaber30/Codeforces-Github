#include<bits/stdc++.h>
using namespace std;
using ll=long long;
 
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  int t;
  cin>>t;
  while(t--){
     int n,m,i,j,k;
     cin>>n>>m;
     vector<string>s(n);
     for(i=0;i<n;i++){
        cin>>s[i];
        
     }
     vector<int>row(n),col(m);
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            row[i]+=(s[i][j]=='.');
            col[j]+=(s[i][j]=='.');
        }
     }
        int ans=(n+m);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ans=min(ans,row[i]+col[j]-(s[i][j]=='.'));
            }
        }
        cout<<ans<<'\n';
     
  }
 
}
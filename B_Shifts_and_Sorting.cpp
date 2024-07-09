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
        ll i,j,k,one=0,sum=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
            }
            else{
                if(one>=1){
                    sum=sum+one+1;
                }
            }
        }
        cout<<sum<<endl;
    }
}
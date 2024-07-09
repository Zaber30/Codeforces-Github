#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    string s;
    cin>>s;
    ll i,j,k,sum=1,ans=0,pre[s.size()]={0};
    string s1=s;
    sort(s1.begin(),s1.end());
    if(s1[0]=='9'&&s1[s1.size()-1]=='9'){
        for(i=0;i<s.size();i++){
            sum=sum*9;
        }
        cout<<sum<<endl;
        return 0;
    }

    if(s.size()==1){
        cout<<(s[0]-'0')<<endl;
    }
    else{
        for(i=0;i<s.size()-1;i++){
                sum=1;
            for(j=0;j<s.size();j++){
                if(j<i){
                    if((s[j]-'0')>=1){
                        sum=sum*(s[j]-'0');
                    }
                }
                else if(j==i){

                   if((s[j]-'0')==0){
                    for(k=j;k<s.size();k++){
                        if((s[k]-'0')>=1){
                            sum=sum*(s[k]-'0');
                        }
                    }
                    ans=max(ans,sum);break;

                   }
                   else{
                        if(((s[j]-'0')-1)>=1)
                        sum=sum*((s[j]-'0')-1);

                   }
                }
                else{
                    sum=sum*9;
                }
            }
            ans=max(ans,sum);
        }
        ll sum=1;
        for(i=0;i<s.size();i++){
            if((s[i]-'0')>=1){
                sum=sum*(s[i]-'0');
            }
        }
        ans=max(ans,sum);
        cout<<ans<<endl;
    }
}

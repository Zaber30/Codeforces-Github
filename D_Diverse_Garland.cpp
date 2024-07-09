#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,i,j,k,cnt=0;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v;
    v.push_back('R');
    v.push_back('G');
    v.push_back('B');
    for(i=1;i<n;i++){
        if(s[i]==s[i-1]){
            cnt++;
            for(j=0;j<v.size();j++){
                if(v[j]!=s[i]&&v[j]!=s[i+1]){
                    s[i]=v[j];
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
    cout<<s<<endl;
}

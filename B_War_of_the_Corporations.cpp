#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll i,j,k;
    string s,t;
    cin>>s;
    cin>>t;
    ll cnt=0;
    for(i=0;i<s.size();){
        if(s.substr(i,t.size())==t){
            i=i+t.size();
            cnt++;
        }
        else{
            i++;
        }
    }
    cout<<cnt<<endl;
}

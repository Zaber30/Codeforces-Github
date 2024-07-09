#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll a,b;
    cin>>a>>b;
    vector<ll>v1,v2;
        ll x=0,i;
    while((x+1)*(x+2)<=2*(a+b)){
        x++;
    }
    for(i=x;i>=1;i--){
        if(a>=i){
            v1.push_back(i);
            a=a-i;
        }else{
        v2.push_back(i);
        }
    }
    cout<<v1.size()<<endl;
    for(i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<endl;
    for(i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
}

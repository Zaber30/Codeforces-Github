#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string s;
    cin>>s;
    ll j=0,i,l,sum=0;
    for(i=0,j=0;i<n;i=j){
        while(i<n&&s[i]==s[j]){
            j++;
        }
        sort(v.begin()+i,v.begin()+j);
        reverse(v.begin()+i,v.begin()+j);
        for(l=i;l<min(j,i+k);l++){
            sum=sum+v[l];
        }
    }
    cout<<sum<<endl;
}

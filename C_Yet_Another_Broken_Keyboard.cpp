#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,i,j,k;
    cin>>n>>m;
    string s;
    cin>>s;
    char c;
    ll a[26]={0};
    for(i=0;i<m;i++){
        cin>>c;
        a[c-'a']++;

    }
    ll sum=0,cnt=0;
    for(i=0;i<s.size();i++){
        if(a[s[i]-'a']>=1){
            cnt++;
        }
        else{
            sum=sum+((cnt*(cnt+1))/2);
            cnt=0;
        }
    }
    sum=sum+((cnt*(cnt+1))/2);
    cout<<sum<<endl;
}

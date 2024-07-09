#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s,s1,k;
    ll i,j;
    cin>>s;
    cin>>s1;
    char p;
    for(i=0;i<s.size();i++){
        if(s[i]<s1[i]){
            cout<<-1<<endl;
            return 0;
        }
        p=min(s[i],s1[i]);
        k=k+p;

    }
    cout<<k<<endl;
}

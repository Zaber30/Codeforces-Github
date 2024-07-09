#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k;
        cin>>n;
        ll a[n+2],flag=0;
        map<ll,ll>mp;
        for(i=1;i<=n;i++){
            cin>>a[i];

            if(a[i]<i){
                flag=1;
            }
        }

    if(flag==1){
        cout<<-1<<endl;
    }
    else{
        stack<ll>st;
        ll cnt=0;
        vector<ll>v;
        for(i=1;i<=n;i++){
            mp[a[i]]++;
            for(j=cnt+1;j<a[i];j++){
                st.push(j);
            }
            if(mp[a[i]]>1){
                v.push_back(st.top());
                st.pop();
            }
            else{
                v.push_back(a[i]);
            }
            cnt=a[i];
        }
        for(i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    }
}

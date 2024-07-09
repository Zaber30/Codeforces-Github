#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll a[n];

    map<ll,ll>p,s;
    ll sum=0;
    for(i=0;i<n;i++){
        cin>>a[i];
         s[a[i]]++;
         sum=sum+a[i];
    }
    if(sum&1){
        cout<<"NO"<<endl;
        return 0;
    }
    ll pre=0;
    for(i=0;i<n;i++){
        pre=pre+a[i];
        s[a[i]]-=1;
        p[a[i]]++;
        ll re=sum/2-pre;
        if(re==0||(re>0&&s[re]>0)||(re<0&&p[-re]>0)){
            cout<<"YES"<<endl;
            return 0;
        }

    }
    cout<<"NO"<<endl;
}


#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
    ll n,k,i,j,mi,ma=0,l=0;
    cin>>n>>k;
    ll a[n];
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt=0,temp1,temp2;
    for(i=0;i<n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==1){
            cnt++;
        }
        while(cnt>k){
            mp[a[l]]--;
            if(mp[a[l]]==0){
                cnt--;
            }
            l++;


        }
        if((i-l+1)>ma){
            temp1=l;
            temp2=i;
            ma=(i-l+1);
        }
    }
    cout<<temp1+1<<" "<<temp2+1<<endl;
}

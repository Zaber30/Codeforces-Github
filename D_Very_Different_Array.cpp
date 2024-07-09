#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,i,j,k;
        cin>>n>>m;
        vector<ll>v1(n),v2(m);
        for(i=0;i<n;i++){
            cin>>v1[i];
        }
        for(i=0;i<m;i++){
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<ll>());
        i=0,j=n-1;
        ll l=0,r=m-1,left,right,mx,sum=0;
        while(i<=j){
            left=abs(v1[i]-v2[l]);
            right=abs(v1[j]-v2[r]);
            mx=max(left,right);
            if(mx==left){
                i++;
                l++;
            }
            else{
                j--;
                r--;
            }
            sum=sum+mx;
        }
        cout<<sum<<endl;
    }
}

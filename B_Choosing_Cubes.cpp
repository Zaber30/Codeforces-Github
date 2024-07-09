#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k,i,j;
        cin>>n>>f>>k;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        ll cnt=0,lnt=0;
        for(i=0;i<n;i++){
            if(a[i]==a[f-1]){
                lnt++;
            }
        }
        sort(a,a+n,greater<int>());
        for(i=0;i<k;i++){
            if(a[i]==b[f-1]){
                cnt++;
            }
        }
        if(cnt>=1){
            if(lnt==cnt){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"MAYBE"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }

    }

}



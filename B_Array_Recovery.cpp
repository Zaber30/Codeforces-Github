#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,j,k;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        b[0]=a[0];
        for(i=1;i<n;i++){
            b[i]=b[i-1]+a[i];
        }
        int flag=0;
        for(i=0;i<n-1;i++){
            if((b[i]-a[i+1])>=0&&a[i+1]!=0){
                cout<<-1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            for(i=0;i<n;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
}

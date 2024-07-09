#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a,b,i,j,k,sum=0,sum1=0;
    string s;
    for(i=0;i<n;i++){
        cin>>a>>b;
        if(sum+a-sum1<=500){
            sum=sum+a;
            cout<<"A";
        }
        else{
                sum1=sum1+b;
                cout<<"G";
                }



    }
    cout<<endl;

}

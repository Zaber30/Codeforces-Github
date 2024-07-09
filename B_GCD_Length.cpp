#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    while(n--)
        {
    int a,b,c;
    cin>>a>>b>>c;
    ll sum1=0,sum2=0;
    sum1=pow(10,a-1);
    sum1=sum1+pow(10,c-1);
    sum2=pow(10,b-1);

    cout<<sum1<<" "<<sum2<<endl;
    }
}

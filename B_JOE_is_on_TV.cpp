#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    double sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    cout<<fixed;
    cout<<setprecision(7);
    cout<<sum<<endl;
}

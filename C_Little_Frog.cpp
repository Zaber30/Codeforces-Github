#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    int i;
    for(i=1;i<=n/2;i++)
    {
        cout<<i<<" "<<n-i+1<<" ";
    }
    if(n%2==1)
    {
        cout<<n/2+1;
    }
    cout<<endl;
}

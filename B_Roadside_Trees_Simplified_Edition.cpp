#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=a[0]+1;
    for(i=0;i<n-1;i++)
    {
        sum=sum+abs(a[i]-a[i+1])+2;

    }
    //sum=sum+a[n-1];
    cout<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,cnt=0;

    int b[n],c[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //b[i]=b[i-1]+a[i];
    }
    b[0]=a[0];
    for(i=1;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
    }
    c[n-1]=a[n-1];
    for(i=n-2;i>=0;i--)
    {
       c[i]=c[i+1]+a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(b[i]==c[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;



}

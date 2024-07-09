#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int a[n],b[102]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    int sum=0;
    for(i=0;i<=100;i++)
    {
        sum=sum+(b[i]/2);
    }
    cout<<(sum/2)<<endl;

}

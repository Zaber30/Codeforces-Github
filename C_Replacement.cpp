#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==1&&a[n-1]==1)
    {
        for(i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"1"<<" ";
        for(i=0;i<n-1;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
}

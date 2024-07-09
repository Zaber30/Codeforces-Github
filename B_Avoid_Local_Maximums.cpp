#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(i=1;i<n-2;i++)
        {
           if(a[i]>a[i-1]&a[i]>a[i+1])
           {
               cnt++;
               a[i+1]=max(a[i],a[i+2]);
           }
        }
        if(a[n-2]>a[n-1]&&a[n-2]>a[n-3])
           {
              cnt++;
                a[n-1]=a[n-2];
           }
        cout<<cnt<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

}
}

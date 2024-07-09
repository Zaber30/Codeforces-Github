#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int b[3]={0},n;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            b[a[j]]++;
        }
        if(b[2]%2==0&&b[1]%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(b[2]%2!=0&&b[1]==0)
        {
            cout<<"NO"<<endl;
        }
        else if((b[2]-1)%2==0&&(b[1]+2)%2==0)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
}

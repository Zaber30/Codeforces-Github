#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,a[200001]={0},cnt=0;
        cin>>n;
        int b[n];
        for(j=0;j<n;j++)
        {
            cin>>b[j];
        }
        for(j=0;j<n;j++)
        {
            a[b[j]]++;

            if(a[b[j]]==3)
            {
                cout<<b[j]<<endl;
                break;
            }
            cnt++;
        }
        if(cnt==n)
        {
            cout<<"-1"<<endl;
        }
    }


}

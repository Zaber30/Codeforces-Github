#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for(i=0;i<n;i++)
        {
            int diff=0;
            diff=abs(H-a[i]);
            if(diff%k==0&&(diff/k)<m&&(H!=a[i]))
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
}

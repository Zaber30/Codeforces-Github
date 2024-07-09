#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        priority_queue<long long int>v;
         long long int sum=0;
        for(j=0;j<n;j++)
        {
            if(a[j]!=0)
            {
                v.push(a[j]);
                continue;
            }
            if(!v.empty())
            {
                sum=sum+v.top();
                v.pop();
            }
        }
        cout<<sum<<endl;
    }
}

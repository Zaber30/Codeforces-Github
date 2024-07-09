#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,cot=0,j,sum;
    int a[101];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[0]==a[j])
            {
                cot++;
            }
            else
            {
                sum=j+1;
            }

        }
        if(cot==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<sum<<endl;
        }
        cot=0;
    }
}

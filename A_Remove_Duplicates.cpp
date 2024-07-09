#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,cot=0;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                a[j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {

        if(a[i]!=0)
        {
            cot++;
        }
    }
    cout<<cot<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;


}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt1=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            cnt1++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=i)
        {
            if(a[a[i]]==i)
            {
                swap(a[i],a[a[i]]);
                flag=1;
                break;
            }
        }
    }
    if(cnt1==n)
    {
        cout<<cnt1<<endl;
    }
    else if(flag==1)
    {
        cout<<cnt1+2<<endl;
    }
    else
    {
        cout<<cnt1+1<<endl;
    }

}

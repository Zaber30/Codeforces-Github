#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0,sum=0;
    cin>>n;
    int a[12],flag=0;
    for(i=0;i<12;i++)
    {
        cin>>a[i];
    }
    sort(a,a+12);
    for(i=12-1;i>=0;i--)
    {
        if(sum>=n)
        {
            flag=1;
            break;
        }
        else
        {


        sum=sum+a[i];
        cnt++;
        }

    }
    if(flag==0&&sum>=n)
    {
        cout<<cnt<<endl;
    }
    else if(flag==1)
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

}

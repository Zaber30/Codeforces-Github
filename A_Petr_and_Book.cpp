#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    int a[7],i;
    for(i=0;i<7;i++)
    {
     cin>>a[i];
    }
    int cnt=0,sum=0,k=0;
    while(1)
    {
        if(sum>=n)
        {
            break;
        }
        else
        {
            if(k==7)
            {
                k=0;
                sum=sum+a[k];
                cnt++;
                k++;
            }
            else
            {
                sum=sum+a[k];
                cnt++;
                k++;
            }
        }
    }
    if(cnt%7==0)
    {
        cout<<"7"<<endl;
    }
    else
    {
        cout<<cnt%7<<endl;
    }

}

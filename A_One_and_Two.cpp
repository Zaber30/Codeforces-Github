#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int n,j,sum=0,cnt=0,com=0,temp;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]==2)
            {
                sum=sum+a[j];
            }

        }
        for(j=0;j<n-1;j++)
        {
            if(a[j]==2)
              {
                  com=com+2;
              }
            temp=com;

            if((sum-com)==temp)
            {
                cout<<j+1<<endl;
                cnt++;
                break;
            }
        }

        if(cnt==0)
        {
            cout<<"-1"<<endl;
        }

    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,k;
        cin>>n;
        if(n==2||n==3)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    cout<<"1"<<" ";
                }
                cout<<endl;
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                {
                    for(k=0;k<n;k++)
                    {
                        if(k==0||k==n-1)
                        {
                            cout<<"1"<<" ";
                        }
                        else
                        {
                            cout<<"0"<<" ";
                        }
                    }
                }
                else
                {
                    for(k=0;k<n;k++)
                    {
                        if(k==j||k==j+1)
                        {
                            cout<<"1"<<" ";
                        }
                        else
                        {
                            cout<<"0"<<" ";
                        }
                    }
                }
                cout<<endl;
            }
        }
    }
}

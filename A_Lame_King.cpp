#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      int n,m,sum=0,temp;
        cin>>n>>m;
        n=abs(n);
        m=abs(m);
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;
        }
        sum=min(n,m);
        n=n-sum;
        m=m-sum;
        sum=sum*2;
        if(n==1)
        {
            sum=sum+1;
            cout<<sum<<endl;
        }
        else if(n==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<sum+(n*2-1)<<endl;
        }

    }
}

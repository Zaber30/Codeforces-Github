
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int sum=0,n,k;
        long long j;
        cin>>n;
        for(j=1;j<=n;j=j*10+1)
        {
            for(k=1;k<=9;k++)
            {
                if(j*k<=n)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;

    }
}

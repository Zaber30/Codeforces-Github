#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,sum=INT_MAX;
    cin>>n>>m>>a>>b;
    int i;
    for(i=0;i<=n;i++)
    {
        int temp=n-(i);
        int sum1=(a*i);
        if(temp%m!=0)
        {
            sum1=sum1+(((temp/m)+1)*b);
        }
        else
        {
            sum1=sum1+((temp/m)*b);
        }
        sum=min(sum,sum1);
    }
    cout<<sum<<endl;

}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int c1,c2,c3,c4;
    int n,m;
    cin>>c1>>c2>>c3>>c4;
    cin>>n>>m;
    int a[n],b[m],i,j;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum1=0,sum2=0,sum3=0,sum4=0;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
       sum1=sum1+min((a[i]*c1),c2);
    }
    for(i=0;i<m;i++)
    {
        sum2=sum2+min((b[i]*c1),c2);
    }
    int ans1=0,ans2=0,ans3=0;
    sum3=sum1+c3;
    sum4=sum2+c3;
    int sum5=sum1+sum2;
    sum5=min(sum5,(2*c3));
    sum5=min(sum3,sum5);
    sum5=min(sum4,sum5);
    sum5=min(sum5,c4);

    cout<<sum5<<endl;
}

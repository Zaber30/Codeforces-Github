#include<bits/stdc++.h>
using namespace std;
#define first ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void manner()
{
    int n;
    cin>>n;
    int a[n],i,sum=0,cnt=0,sum1=0,sum2;
    for(i=0;i<n;i++)
    {
        cin>>i[a];
    }
    sort(a,a+n);
    sum=accumulate(a,a+n,0);
    for(i=n-1;i>=0;i--)
    {
        sum1=sum1+i[a];
            cnt++;
        //sum1=sum1+i[a];
        sum2=(sum-sum1);
        if(sum1>sum2)
        {
            cout<<cnt<<endl;
            break;
        }



    }
}
int main()
{
    first;
    manner();
}

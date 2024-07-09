#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,j,cot=0,lot=0,sum1,sum2;
    int a[5];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[j];
        }
        if(a[0]<a[1])
        {
            sum1=a[1];
        }
        else
        {
            sum1=a[0];
        }
        if(a[2]<a[3])
        {
            sum2=a[3];
        }
        else
        {
            sum2=a[2];
        }
        sort(a,a+4);
        if(sum1>=a[2]||sum1>=a[3])
        {
            cot++;
        }
        if(sum2>=a[2]||sum2>=a[3]){
            lot++;
        }
        if(cot==1&&lot==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        cot=0;
        lot=0;
    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t,a,b,c,d,flag=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
    cin>>x>>t>>a>>b>>c>>d;
    int i,j;
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            sum1=(a-(i*c))+(b-(j*d));
            sum2=(a-(j*c))+(b-(i*d));
            sum3=(a-(i*c));
            sum4=(b-(j*d));
            sum5=(a-(j*c));
            sum6=(b-(i*d));
            if(sum1==x||sum2==x||sum3==x||sum4==x||sum5==x||sum6==x)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==1||x==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

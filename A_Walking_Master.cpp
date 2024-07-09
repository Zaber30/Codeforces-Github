#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,c,d,a1,b1,c1,d1,cnt=0,flag=0;
        cin>>a>>b>>c>>d;

        if(d<b)
        {
            cout<<-1<<endl;
            continue;
        }
        cnt=(d-b);
        b=b+cnt;
        a=a+cnt;

            if(a<c)
            {
                flag=1;

            }
            else
            {
                cnt=cnt+abs(a-c);
            }


        if(flag==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }


    }

}

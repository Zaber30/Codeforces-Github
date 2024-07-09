#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,c,d,temp=0,temp1=0,cnt=0;
        cin>>a>>b;
        cin>>c>>d;
        int j;
        for(j=1;j<=4;j++)
        {
            if(a<b&&c<d&&a<c&&b<d)
            {
                cnt++;
                break;

            }
            else
            {
                temp=a;
                temp1=b;
                a=c;
                c=d;
                b=temp;
                d=temp1;
            }
        }
        if(cnt==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int cnt=0;
        cin>>n;
        while(1)
        {
            if(n==1)
            {
                cout<<cnt<<endl;
                break;
            }
            if(n==2)
            {
                cout<<-1<<endl;
                break;
            }
            if(n==4)
            {
                cout<<-1<<endl;
                break;
            }
            if(n==5)
            {
                cout<<-1<<endl;
                break;
            }
            if(n%6!=0&&(n*2)%6!=0)
            {
                cout<<-1<<endl;
                break;
            }
            if(n%6==0)
            {
                cnt++;

               n=n/6;
            }
            else
            {
                cnt++;
                n=n*2;
            }
        }
    }
}

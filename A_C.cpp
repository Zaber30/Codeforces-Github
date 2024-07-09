#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,n,cnt=0;
        cin>>a>>b>>n;
        while(1)
        {

        if(a>n||b>n)
        {
            cout<<cnt<<endl;
            break;

        }
        if(a>b)
        {
            b=b+a;
            cnt++;
        }
        else if(b>a)
        {
            a=a+b;
            cnt++;

        }
        else
        {
            a=a+b;
            cnt++;
        }
        }

    }

}

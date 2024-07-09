#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,temp;
        cin>>a>>b;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if((b-a)>=a)
        {
            cout<<a<<" "<<a*2<<endl;
        }
        else
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }

    }
}

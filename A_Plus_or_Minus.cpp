#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"+"<<endl;
        }
        else if(a-b==c)
        {
            cout<<"-"<<endl;
        }
    }
}
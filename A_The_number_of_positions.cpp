#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    sum=a-b;
    if(sum==0)
    {
        cout<<"0"<<endl;
    }
    else if((sum-c)==0)
    {
        cout<<c<<endl;

    }
    else if((sum-c)==1)
    {
        cout<<sum<<endl;
    }
    else if((sum-c)<0)
    {
        cout<<sum<<endl;
    }
    else if((sum-c)>1)
    {
        cout<<(c+1)<<endl;
    }
    return 0;

    }

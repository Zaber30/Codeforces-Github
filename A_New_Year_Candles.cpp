#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r;
    cin>>a>>b;
    int sum=a;
    while(1)
    {
        r=sum/b;
        a=a+r;
        sum=r+sum%b;
        if(sum<b)
        {
            break;
        }
    }
    cout<<a<<endl;
    return 0;
}

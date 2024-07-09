#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i=1,cnt=0;
    cin>>n;
    for(i=1;i;)
    {
        sum=i*(i+1)/2;
        cnt=cnt+sum;
        if(cnt>n)
        {
            cout<<i-1<<endl;
            break;
        }
        else if(cnt==n)
        {
            cout<<i<<endl;
            break;
        }
        else
        {
            i++;

        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,sum=0,k=3,j=2;
        cin>>n;
        while(1)
        {
            sum=n/k;
            if(n%k==0)
            {
                cout<<sum<<endl;
                break;
            }
            j=j*2;
            k=k+j;
        }

    }

}

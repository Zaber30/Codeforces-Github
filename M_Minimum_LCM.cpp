#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            int j,a=1;
            for(j=2;j*j<=n;j++)
            {
                if(n%j==0)
                {
                    a=n/j;
                    break;
                }
            }
            cout<<a<<" "<<n-a<<endl;
        }
    }
}

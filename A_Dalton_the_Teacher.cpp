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
        int a[n+1],i,cnt=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i=i+1)
        {
            if(a[i]==i)
            {
                cnt++;
            }
        }
        if(cnt%2==0)
        {
            cout<<cnt/2<<endl;
        }
       //cout<<cnt<<endl;
       else
       {
           cout<<((cnt/2)+1)<<endl;
       }
    }
}

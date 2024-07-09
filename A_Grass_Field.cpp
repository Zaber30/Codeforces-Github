#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[2][2],i,j,cnt=0;
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    cnt++;
                }
            }
        }
        if(cnt==0)
            cout<<"0"<<endl;
        else if(cnt==1||cnt==2||cnt==3)
            cout<<"1"<<endl;
        else
            cout<<"2"<<endl;



    }
}

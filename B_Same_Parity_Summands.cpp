#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,flag1=0,flag2=0,i;
        cin>>n>>k;
        if((n-k+1)%2!=0&&(n-k+1)>0)
        {
            flag1=1;
        }
        else if((n-(k*2)+2)%2==0&&(n-(k*2)+2)>0)
        {
            flag2=1;
        }
        if(flag1==1)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<(n-k+1)<<endl;
        }
        else if(flag2==1)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)
            {
                cout<<"2"<<" ";
            }
            cout<<(n-(k*2)+2)<<endl;


        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

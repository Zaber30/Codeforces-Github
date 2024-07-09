#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,k=0,l=0,cnt=0,mnt=0,bnt=0;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]>0)
            {
                cnt++;
            }
            if(a[j]<0)
            {

                mnt++;
            }
        }
        for(j=1;j<=cnt;j++)
        {
            cout<<j<<" ";
        }
        for(j=1;j<=mnt;j++)
        {
            cout<<--cnt<<" ";
        }
        cout<<endl;
        for(j=1;j<=mnt;j++)
        {
           cout<<"1"<<" "<<"0"<<" ";
           bnt=bnt+2;

        }
        j=1;
        for(k=bnt+1;k<=n;k++)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;




    }
}

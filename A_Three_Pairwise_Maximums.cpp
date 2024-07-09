#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[1]==a[2]&&(a[1]&&a[2]>a[0]))
           {
               cout<<"YES"<<endl;
               cout<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;

           }
           else if(a[0]==a[1]&&a[1]==a[2])
            {
                cout<<"YES"<<endl;
                cout<<a[0]<<" "<<a[1]<<" "<<" "<<a[2]<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
}

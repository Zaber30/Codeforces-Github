#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);cout.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,cnt=0,mnt=0,m,k;
        cin>>n;
        int a[n],b[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(k=0;k<n;k++)
        {
            cin>>b[k];
        }
        for(m=0;m<n;m++)
        {
            if(b[m]<a[m])
            {
                swap(b[m],a[m]);
            }
        }

        if(*max_element(a,a+n)==a[n-1]&&*max_element(b,b+n)==b[n-1])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

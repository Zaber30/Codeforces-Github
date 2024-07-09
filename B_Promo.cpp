#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{

        int n,x,y;
        cin>>n>>x;
        int i,j;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        ll pre[n];
        pre[0]=a[0];
        for(i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        for(i=0;i<x;i++)
        {
            ll sum=0;
            int c,b;
            cin>>c>>b;
            if((c-b-1)<0)
            {
                cout<<pre[c-1]<<endl;
            }
            else
            {
            cout<<(pre[c-1]-pre[c-b-1])<<endl;
            }
            /*for(j=c-b;j<c;j++)
            {
               sum=sum+a[j];
            }
            cout<<sum<<endl;*/
        }



}

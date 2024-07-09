#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        int m,k,i,j,sum=0;
        cin>>m>>k;
        int a[m],b[m];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a,a+m);
        sort(b,b+m);
        for(i=0,j=m-1;i<k,j>=m-k;i++,j--)
        {
            if(a[i]<=b[j])
            {
                a[i]=b[j];

            }
            else
            {
                break;
            }

        }
        for(i=0;i<m;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;



    }
}

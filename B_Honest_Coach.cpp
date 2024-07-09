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
        int m;
        cin>>m;
        int a[m],i,b[m],j=0;
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        for(i=0;i<m-1;i++)
        {
            b[j]=a[i+1]-a[i];
            j++;
        }
        sort(b,b+j);
        cout<<b[0]<<endl;

    }
    return 0;
}

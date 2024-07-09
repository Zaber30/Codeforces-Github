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
        int m,i;
        cin>>m;
        int a[m];
         for(i=0;i<m;i++)
         {
             cin>>a[i];
         }
         sort(a,a+m);
         cout<<(a[m-1]-a[0])<<endl;
    }
    return 0;

}

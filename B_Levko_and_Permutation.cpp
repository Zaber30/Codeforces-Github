#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,k;
    cin>>n>>k;
    int i,j;
    if(k==n)
    {
        cout<<"-1"<<endl;
    }
       else if((n%2==0&&k%2==0)||(n%2!=0&&k%2!=0))
        {
            cout<<n<<" ";
            for(i=2;i<=k+1;i++)
            {
                cout<<i<<" ";
            }
            for(j=i;j<n;j=j+2)
            {
                cout<<j+1<<" "<<j<<" ";
            }
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"1"<<" ";
            for(i=2;i<=k+1;i++)
            {
                cout<<i<<" ";
            }
            for(j=i;j<=n;j=j+2)
            {
                cout<<j+1<<" "<<j<<" ";
            }
        }


}

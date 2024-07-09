#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(m%2==0)
        {
            cout<<m/2<<" "<<m<<endl;
        }
        else
        {
        cout<<(m-1)/2<<" "<<(m-1)<<endl;
        }
    }
    return 0;
}

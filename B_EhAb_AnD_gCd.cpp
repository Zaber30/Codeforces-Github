#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    Faster;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            cout<<a/2<<" "<<a/2<<endl;
        }
        else
        {
            cout<<(a-1)<<" "<<1<<endl;
        }
    }
    return 0;
}

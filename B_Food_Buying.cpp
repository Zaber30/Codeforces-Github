#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        int sum=0,r=0,out=0,m;
        cin>>m;
        while(m>=10)
        {
            r=m/10;
            sum=sum+r*10;
            out=m%10;
            m=r+out;

        }
        cout<<sum+m<<endl;
    }
    return 0;
}

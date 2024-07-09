#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int d,sum=0,a[3];
        cin>>a[0]>>a[1]>>a[2]>>d;
        sort(a,a+3);
        sum=abs(a[0]-a[2])+abs(a[1]-a[2]);
        sum=(d-sum);
        if(sum>=0&&sum%3==0)

        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}

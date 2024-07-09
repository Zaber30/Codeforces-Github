#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        while(n>0)
        {
            int temp=n;
            int temp2,tmep3,sum1=0,sum2=0;
            while(temp>0)
            {
                int ses=temp%10;
                if(ses>0)
                {
                    ses=ses-1;
                }
                temp=temp/10;
                sum1=sum1*10+ses;

            }
            while(sum1>0)
            {
                int ses=sum1%10;
                 sum1=sum1/10;
                 sum2=sum2*10+ses;
            }
            cnt++;
            n=sum2;
        }
        cout<<cnt<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll sum1=0,sum2=0,flag=0;
        if(sum%n==0)
        {
            ll temp=sum/n;
            for(i=n-1;i>=0;i--)
            {
                if(a[i]>=temp)
                {
                    sum1=sum1+abs(temp-a[i]);
                }
                if(a[i]<temp)
                {
                    sum2=sum2+abs(temp-a[i]);
                }
                if(sum1>sum2)
                {
                    flag=1;
                    break;

                }
            }
            if(flag==1)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

}



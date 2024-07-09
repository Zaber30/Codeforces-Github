#include<bits/stdc++.h>
using namespace std;
bool prime[10000000];
using ll=long long;
ll N=10000000;
void pri()
{
    int i,j,k;
    for(i=2;i<=sqrt(N);i++)
    {
        if(prime[i]==false)
        {
        for(j=i+i;j<=N;j=j+i)
        {
            prime[j]=true;
        }
        }
    }
}
int main()
{
    pri();
    int t;
    cin>>t;
    while(t--)
    {

        int l,r;
        cin>>l>>r;
        int i,j;
        if(l==r)
        {
            if(l%2==0&&l/2!=1)
            {
                cout<<l/2<<" "<<l/2<<endl;
            }
            else if(prime[l]==false)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                for(i=2;i<=sqrt(l);i++)
                {
                    if(l%i==0)
                    {
                        break;
                    }
                }
                cout<<l/i<<" "<<(l-(l/i))<<endl;
            }
        }
        else
        {
            for(i=r;i>=l;i--)
            {
                if(i%2==0)
                {
                    break;

                }
            }
            if(i/2==1)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<i/2<<" "<<i/2<<endl;
            }
        }
    }
}

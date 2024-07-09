#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,b,s,i,j;
        cin>>n>>k>>b>>s;
        ll a[n];
        for(i=0;i<n;)
        {
            if(s/k==b)
            {
                a[i]=s;
                s=0;
                i++;
                break;
            }
            else
            {
                if(s<k)
                {
                    a[i]=s;
                    s=s-k;
                    break;

                }
                else
                {
                    a[i]=(k-1);
                s=s-(k-1);

                i++;

                }

            }

        }
        for(j=i;j<n;j++)
        {
            a[j]=0;
        }
        if(s!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
}

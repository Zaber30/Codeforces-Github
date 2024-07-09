#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool prime[100000];
int main()
{
   // vector<ll>v1;
    ll i,j;
    for(i=2;i*i<=100000;i++)
    {
        if(prime[i]==false)
        {
            for(j=i*i;j<=100000;j=j+i)
            {
                prime[j]=true;
            }
        }
    }
    ll n;
    cin>>n;
    vector<ll>v;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=i)
            {
                v.push_back(n/i);

            }
        }
    }
    //sort(v.begin(),v.end());
    if(v.size()==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        //sort(v.begin(),v.end());
        ll value;
        for(i=0;i<v.size();i++)
        {
            if(prime[v[i]]==false)
            {
                value=v[i];
                break;
            }
        }
        ll sum=0;
        sum=sum+1;
        n=n-v[i];
        sum=sum+(n/2);
        cout<<sum<<endl;

    }
}

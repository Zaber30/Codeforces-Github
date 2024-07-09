#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,n,i,j;
        cin>>n>>k;
        ll sum=1,cnt=0;
        while((sum*2)<=k)
        {
            sum=sum*2;
            cnt++;
        }
        if(sum<k){
        sum=sum*2;
        cnt=cnt+1;
        }
        if(sum>=n)
        {
            cout<<cnt<<endl;
        }
        else
        {
            sum=(n-sum);
            ll temp;
            temp=sum/k;
            if(sum%k!=0)
            {
                temp=temp+1;
            }
            cout<<cnt+temp<<endl;
        }


    }
}

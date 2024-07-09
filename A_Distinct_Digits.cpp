#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int l,r,i;
    cin>>l>>r;
    int ok=0;
    for(i=l;i<=r;i++)
    {
        int n=i,flag=0,ses;
        map<int,int>mp;
        while(n>0)
        {
            ses=n%10;
            mp[ses]++;
            n=n/10;
            if(mp[ses]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ok=1;
            break;
        }
    }
    if(ok==1)
    {
        cout<<i<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }

}

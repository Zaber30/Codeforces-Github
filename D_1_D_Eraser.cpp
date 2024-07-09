#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,i,j,k;
        cin>>n>>m;
        string s;
        cin>>s;
        ll cnt=0,cnt1=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='B'&&cnt==0)
            {

                cnt=i+1;
            }
            else if(cnt!=0)
            {
                if(i+1-cnt+1<=m)
                {
                    continue;
                }
                else
                {
                    cnt=0;
                    i--;
                    cnt1++;
                }
            }

        }
        if(cnt>0)
        {
            cnt1++;
        }
        cout<<cnt1<<endl;
    }
}

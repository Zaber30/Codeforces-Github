#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,sum=0,sum1=0,cnt=0,cnt1=0,temp1=0,temp2=0,sum2=0,sum3=0,sum4=0;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        ll i;
        vector<ll>v1,v2;
        sum1=(a*s.size())+(b*s.size());
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
            {
                if(cnt>0)
                {
                    sum2=sum2+(a*cnt)+b;
                    cnt=0;
                }
                cnt1++;
            }


        }
        if(cnt>0)
        {
            sum2=sum2+(a*cnt)+b;
        }
        if(cnt1>0)
        sum2=sum2+(a*cnt1)+b;
        cnt=0,cnt1=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                cnt1++;
            }
            else
            {
                if(cnt1>0)
                {
                    sum3=sum3+(a*cnt1)+b;
                    cnt1=0;
                }
                cnt++;
            }

        }
        if(cnt1>0)
        {
            sum3=sum3+(a*cnt1)+b;
        }
        if(cnt>0)
        sum3=sum3+(a*cnt)+b;
        ll ans=max(sum1,sum2);
        ans=max(ans,sum3);
        cout<<ans<<endl;



    }
}

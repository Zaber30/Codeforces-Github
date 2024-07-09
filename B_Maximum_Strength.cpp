#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        ll temp,i,j,k,l,sum=0;
        if(s1.size()!=s2.size())
        {
            if(s1.size()<s2.size())
            {
                temp=s2.size()-s1.size();
                reverse(s1.begin(),s1.end());
                for(j=1;j<=temp;j++)
                {
                    s1+='0';
                }
                reverse(s1.begin(),s1.end());
            }
            else
            {
                temp=s1.size()-s2.size();
                reverse(s2.begin(),s2.end());
                for(j=1;j<=temp;j++)
                {
                    s2+='0';
                }
                reverse(s2.begin(),s2.end());
            }
        }
        for(j=1;j<=s1.size();j++)
        {
            if(s1[j-1]!=s2[j-1])
            {
                sum=sum+abs((s1[j-1]-'0')-(s2[j-1]-'0'));

                break;

            }
        }
        if(j==s1.size()+1)
        {
            cout<<sum<<endl;
        }
        else
        {
           sum=sum+((s1.size()-j)*9);
        cout<<sum<<endl;
        }
        //sum=sum+((s1.size()-j)*9);
        //cout<<sum<<endl;

        }
}

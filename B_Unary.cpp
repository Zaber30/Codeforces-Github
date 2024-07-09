#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e6+3;
ll exp(ll n,ll pow)
{
    ll sum=1;
    while(pow>0)
    {
        if(pow%2==1)
        {
            sum=(sum*n)%mod;
            pow=pow-1;

        }
        else
        {
            pow=pow/2;
            n=(n*n)%mod;
        }
    }
    return sum;
}
int main()
{
    ll i,j,sum=0;
    string s1,s2="";
    cin>>s1;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='>')
        {
            s2=s2+"1000";
        }
        else if(s1[i]=='<')
        {
            s2=s2+"1001";
        }
        else if(s1[i]=='+')
        {
            s2=s2+"1010";
        }
        else if(s1[i]=='-')
        {
            s2=s2+"1011";
        }
        else if(s1[i]=='.')
        {
            s2=s2+"1100";
        }
        else if(s1[i]==',')
        {
            s2=s2+"1101";
        }
        else if(s1[i]=='[')
        {
            s2=s2+"1110";
        }
        else if(s1[i]==']')
        {
            s2=s2+"1111";
        }
    }
    ll l=s2.size()-1;
    for(i=0;i<s2.size();i++)
    {
        sum=(sum+((s2[i]-'0')*exp(2LL,l)%mod))%mod;
       // sum=(sum+((s2[i]-'0')*pow(2,l)))%1000003;
        l--;
    }
    cout<<sum<<endl;
}

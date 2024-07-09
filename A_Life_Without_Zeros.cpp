#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll a,b,sum=0,i;
    cin>>a>>b;
    sum=a+b;
    string s1,s2="",s3,s4,s5="",s6="";
    s3=to_string(a);
    s4=to_string(b);
    s1=to_string(sum);
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]!='0')
        {
            s2+=s1[i];
        }
    }
    for(i=0;i<s3.size();i++)
    {
        if(s3[i]!='0')
        {
            s5+=s3[i];
        }
    }
    for(i=0;i<s4.size();i++)
    {
        if(s4[i]!='0')
        {
            s6+=s4[i];
        }
    }
    ll sum1=stoi(s2);
    ll sum2=stoi(s5);
    ll sum3=stoi(s6);
    ll sum4=(sum2+sum3);
    //cout<<sum1<<" "<<sum4;
    if(sum1==sum4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}

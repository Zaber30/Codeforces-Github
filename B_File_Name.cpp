#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,j,k;
    int cnt=0,sum=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='x')
        {
            cnt++;
        }
        else
        {
            if(cnt>=3)
            {
                sum=sum+(cnt-2);
            }
            cnt=0;
        }
    }
    if(cnt>=3)
    {
        sum=sum+(cnt-2);
    }
    cout<<sum<<endl;
}

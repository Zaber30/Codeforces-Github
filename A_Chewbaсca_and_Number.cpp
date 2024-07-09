#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum;
    sum=s[0]-'0';
    if((9-sum)<sum&&(9-sum)!=0)
    {
        s[0]=((9-sum)+'0');
    }
    for(int i=1;i<s.size();i++)
    {
        sum=s[i]-'0';
        if((9-sum)<sum)
        {
            s[i]=((9-sum)+'0');
        }
    }
    cout<<s<<endl;

}

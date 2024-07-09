#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    cin>>s;
    int cnt=0;
    while(1)
    {
        int sum=0;
        if(s.size()==1)
        {
            break;
        }

        for(i=0;i<s.size();i++)
        {
            sum=sum+(s[i]-'0');

        }
        string s1;
        s=to_string(sum);
        if(s.size()==1)
        {
            cnt++;
            break;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

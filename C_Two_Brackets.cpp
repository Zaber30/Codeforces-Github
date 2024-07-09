#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,j,cnt1=0,cnt2=0,cnt3=0,cnt4=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                cnt1++;
            }
            else if(s[i]==')')
            {
                if(cnt1>cnt2)
                {
                    cnt2++;
                }
            }
            else if(s[i]=='[')
            {
                cnt3++;
            }
            else if(s[i]==']')
            {
                if(cnt3>cnt4)
                {
                    cnt4++;
                }
            }

        }
       cout<<min(cnt1,cnt2)+min(cnt3,cnt4)<<endl;
    }
}

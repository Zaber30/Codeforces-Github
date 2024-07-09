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
        int i;
        cin>>s;
        if(s.size()<=3)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int cnt=0;
            int m=s.size()/2;
            for(i=1;i<m;i++)
            {
                if(s[i]==s[i-1])
                {
                    cnt++;
                }
            }
            if(cnt==m-1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }

        }
    }
}

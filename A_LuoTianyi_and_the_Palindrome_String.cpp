#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i,j,sum=-1;
        cin>>s;
        int n=s.size();
        for(i=0;i<s.size();i++)
        {
            for(j=1;j<=n;j++)
            {
                string m=s.substr(i,j);
                string s=m;
                reverse(m.begin(),m.end());
                if(s!=m)
                {
                    int h=m.size();
                    sum=max(sum,h);
                }
            }
        }
        cout<<sum<<endl;
    }
}

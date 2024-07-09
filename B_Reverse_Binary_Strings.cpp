#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        int i;
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
            }
        }
        cout<<(cnt+2-1)/2<<endl;
        //cout<<ceil(cnt/2.0)<<endl;

    }
}

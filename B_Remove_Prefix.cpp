#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans=0;
        for(i=0;i<n;i++)
        {
            if(mp[a[i]]>1)
            {
                mp[a[i]]--;
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
}

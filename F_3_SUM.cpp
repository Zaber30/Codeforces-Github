#include<bits/stdc++.h>
using namespace std;
int func()
{
        int n,j,k,i;
        map<int,int>mp;
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            mp[a[j]%10]++;
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                for(k=0;k<10;k++)
                {
                    if((i+j+k)%10==3)
                    {
                        mp[i]--;
                        mp[j]--;
                        mp[k]--;
                        if(mp[i]>=0&&mp[j]>=0&&mp[k]>=0)
                        {
                         cout<<"YES"<<endl;
                          return 0;
                        }
                        else
                        {
                            mp[i]++;
                            mp[j]++;
                            mp[k]++;
                        }
                    }
                }
            }
        }
        cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        func();
    }
}

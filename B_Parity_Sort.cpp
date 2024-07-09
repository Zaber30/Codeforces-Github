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
        int a[n];
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back(a[i]);
        }
        int flag=0;
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if((a[i]%2==0&&v[i]%2==0)||(a[i]%2!=0&&v[i]%2!=0))
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }


    }
}

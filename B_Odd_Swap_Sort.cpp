#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j;
        int a[n];
        vector<int>odd,even;
        int ok=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }
        for(i=1;i<even.size();i++)
        {
            if(even[i]<even[i-1])
            {
                ok=1;
                break;
            }
        }
        for(i=1;i<odd.size();i++)
        {
            if(odd[i]<odd[i-1])
            {
                ok=1;
                break;
            }
        }
        if(ok==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
       // even.clear();
        //odd.clear();
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    map<int,int>mp;
    int mx=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx=max(mx,mp[a[i]]);
    }
    cout<<n-mx<<endl;
}

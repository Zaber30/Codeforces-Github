#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r,i,j;
        cin>>n>>s>>r;
        vector<int>v;
        v.push_back((s-r));
        n=n-1;
        int vag=r/n;
        int rem=r%n;
        for(i=1;i<=rem;i++)
        {
            v.push_back(vag+1);
        }
        int sum=n-rem;
        for(i=1;i<=sum;i++)
        {
            v.push_back(vag);
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

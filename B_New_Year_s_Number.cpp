#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
        while(n>=2020)
        {
            if(n%2020==0)
            {
                cnt=cnt+n/2020;
                n=n-((n/2020)*2020);
            }
            else
            {
                n-=2021;
            }
        }
        if(n!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s="aeiou";
    int i,n,a,b;
    cin>>n;
    for(i=5;i*i<=n;i++)
    {
        if(n%i==0)
        {
            for(a=0;a<i;a++)
            {
                for(b=0;b<n/i;b++)
                {
                    cout<<s[(a+b)%5];
                }
            }
            cout<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}

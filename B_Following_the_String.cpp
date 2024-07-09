#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;

    cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        string s1;
        ll b[n],c[26]={0};
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ll sum1=0;
        for(i=0;i<n;i++)
        {

                for(j=0;j<26;j++)
                {
                    if(c[j]==b[i])
                    {
                        s1=s1+(char)(j+'a');
                        c[j]=c[j]+1;
                        break;
                    }
                }




        }

            cout<<s1<<endl;

    }
}

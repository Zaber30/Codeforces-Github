#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1);
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using ll=long long;
int main()
{
    fast;
    int t;
    cin>>t;
    int i;
    for(i=0;i<t;i++)
    {
        int n,m,j,flag=0,k;
        cin>>n>>m;
        string s;

        cin>>s;
        if(m>(s[0]-'0'))
        {
            flag=2;
        }
        else
        {
            for(j=1;j<n;j++)
            {
                if(m>(s[j]-'0'))
                {
                    k=j;
                    flag=1;
                    break;
                }
            }
        }

        if(flag==2)
        {
            cout<<m<<s<<endl;
        }
        else if(flag==1)
        {
            for(j=0;j<k;j++)
            {
                cout<<s[j];
            }
            cout<<m;
            for(k=j;k<n;k++)
            {
                cout<<s[k];
            }
            cout<<endl;

        }
        else
        {
            cout<<s<<m<<endl;
        }

    }



    return 0;
}

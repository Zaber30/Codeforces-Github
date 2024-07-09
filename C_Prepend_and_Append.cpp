#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,k;
        cin>>n;
        string s;
        cin>>s;
        for(j=0,k=n-1;j<n,k>=0;j++,k--)
        {
            if(n>1&&s[j]=='0'&&s[k]=='1')
            {
                n=n-2;
            }
            else if(n>1&&s[j]=='1'&&s[k]=='0')
            {
                n=n-2;
            }
            else
            {
                cout<<n<<endl;
                break;
            }
        }
    }
}



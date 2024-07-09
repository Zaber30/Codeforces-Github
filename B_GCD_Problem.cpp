#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,sum=0;
        cin>>n;
        if(n%2==0)
        {
            cout<<(n-1)/2<<" "<<(((n-1)/2)+1)<<" "<<1<<endl;
        }
        else
        {
            sum=(n-1)/2;
            if(sum%2==0)
            {
                cout<<((n-1)/2)-1<<" "<<((n-1)/2)+1<<" "<<1<<endl;

            }
            else
            {
                cout<<((n-1)/2)-2<<" "<<((n-1)/2)+2<<" "<<1<<endl;
            }
        }

    }

}


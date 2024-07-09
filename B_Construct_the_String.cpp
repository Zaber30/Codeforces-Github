#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,i,j;
        cin>>n>>m>>k;
        vector<char>s;
        char x;
        for(i=0;i<k;i++)
        {
            x=('a'+i);
            s.push_back(x);

        }
        for(i=1;i<=(n/k);i++)
        {
            for(j=0;j<s.size();j++)
            {
                cout<<s[j];
            }
        }
        int o=n%k;
        for(i=0;i<o;i++)
        {
            cout<<s[i];
        }
        cout<<endl;


    }
}

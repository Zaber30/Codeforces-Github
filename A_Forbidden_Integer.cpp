#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,i;
        cin>>n>>k>>x;
        int flag=0;
        int a;
        for(i=1;i<=k;i++)
        {
             a=n-((n/i)-1)*i;
            if(i!=x&&a!=x&&a<=k)
            {
              flag=1;

              break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            vector<int>v;
            if(a!=0)
            {
                v.push_back(a);
            }
            for(int j=1;j<=(n/i)-1;j++)
            {
                v.push_back(i);
            }
            cout<<"YES"<<endl;
            cout<<v.size()<<endl;
            for(i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
}

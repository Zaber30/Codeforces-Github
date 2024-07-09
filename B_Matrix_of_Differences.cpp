#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        int i,j,k=0;
        for(i=1;i<=n*n;i++)
        {
            v.push_back(i);
            v.push_back((n*n)-i+1);
        }
        if((n*n)%2!=0)
        {
            v.push_back(((n*n)/2)+1);
        }
        if(n%2==1)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<v[k]<<" ";
                    k++;
                }
                cout<<endl;
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {  vector<int>v1;
                    for(j=0;j<n;j++)
                    {
                        v1.push_back(v[k]);
                        k++;
                    }
                    for(j=n-1;j>=0;j--)
                    {
                        cout<<v1[j]<<" ";
                    }
                }
                else
                {
                    for(j=0;j<n;j++)
                    {
                        cout<<v[k]<<" ";
                        k++;
                    }
                }
                cout<<endl;
            }
        }
    }
}

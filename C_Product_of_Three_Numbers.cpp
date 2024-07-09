#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,cnt=0,j,k,siz;
        vector<int>v;
        cin>>n;
        for(j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                v.push_back(j);
                n=n/j;
                cnt++;
                break;
            }
        }
        if(cnt==1)
        {
            for(k=j+1;k<=sqrt(n);k++)
            {
                if(n%k==0)
                {
                    v.push_back(k);
                    v.push_back(n/k);
                    break;
                }

            }
        }
        sort(v.begin(),v.end());
        siz=unique(v.begin(),v.end())-v.begin();
        if(siz==3)
        {
            cout<<"YES"<<endl;
            for(k=0;k<2;k++)
            {
                cout<<v[k]<<" ";

            }
            cout<<v[2]<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }


}

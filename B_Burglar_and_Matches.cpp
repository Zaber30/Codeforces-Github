#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<pair<int,int>>p;
    int i,j,p1,p2,sum1=0,sum2=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>p1>>p2;
        p.push_back({p2,p1});
    }
    sort(p.begin(),p.end());
    for(j=p.size()-1;j>=0;j--)
    {
       sum1=sum1+p[j].second;
       sum2=sum2+(p[j].second*p[j].first);
       if(sum1==n)
       {
           break;
       }
       else if(sum1>n)
       {
           sum1=sum1-n;
           sum2=sum2-(sum1*p[j].first);
           break;
       }


    }
    cout<<sum2<<endl;

}

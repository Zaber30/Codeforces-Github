#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<pair<int,int>>v1,v2;
    int i,j,n,m,l,o,k;
    cin>>k;
    int a[k]={0};
    for(i=0;i<k;i++)
    {
        cin>>n>>m>>l>>o;
        v1.push_back({n,m});
        v2.push_back({l,o});

    }
    for(i=0;i<k;i++)
    {
        int cnt=0;
        for(j=0;j<k;j++)
        {
            if(v1[i].first>v1[j].first&&v1[i].second>v1[j].second&&v2[i].first>v2[j].first&&v2[i].second>v2[j].second)
            {
                  v1[j].first=0;
                  v1[j].second=0;
                  v2[j].first=0;
                  v2[j].second=0;
            }
        }
        a[i]=cnt;
    }
    /*int sum=-1,pos=-1;
    for(i=0;i<k;i++)
    {
        if(a[i]>sum)
        {
            sum=a[i];
            pos=i;
        }
    }
    for(i=0;i<k;i++)
    {
        if(v1[i].first<v1[pos].first&&v1[i].second<v1[pos].second&&v2[i].first<v2[pos].first&&v2[i].second<v2[pos].second)
        {
            v1[i].first=0;
            v1[i].second=0;
            v2[i].first=0;
            v2[i].second=0;
        }
    }*/
    int resul=1111,pos1=-1;
    for(i=0;i<k;i++)
    {
        if(v2[i].second<resul&&v2[i].second!=0)
        {
            resul=v2[i].second;
            pos1=i;
        }
    }
    cout<<pos1+1<<endl;
    //cout<<resul<<endl;

}

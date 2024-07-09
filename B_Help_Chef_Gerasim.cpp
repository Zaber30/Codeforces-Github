#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    vector<pair<int,int>>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back({a[i],i});
    }
    int sum=0,pos1=0,pos2=0,sum1=0;
    sort(v.begin(),v.end());
    if(v[0].first==v[n-1].first)
    {
        cout<<"Exemplary pages."<<endl;
    }
    else
    {
        if((v[0].first+v[n-1].first)%2!=0)
        {
            cout<<"Unrecoverable configuration.";
        }
        else
        {
            sum=(v[0].first+v[n-1].first)/2;
            pos1=v[0].second;
            pos2=v[n-1].second;
            sum1=v[n-1].first;
            v[0].first=sum;
            v[n-1].first=sum;
            sort(v.begin(),v.end());
            if(v[0].first==v[n-1].first)
            {
                cout<<(sum1-sum)<<" ml. from cup #"<<pos1+1<<" to cup #"<<pos2+1<<"."<<endl;
            }
            else
            {
                cout<<"Unrecoverable configuration."<<endl;
            }
        }
    }
}

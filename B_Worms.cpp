#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int>>v;
    cin>>n;
    int a[n];
    cin>>a[0];
    int num,i;
    v.push_back({1,a[0]});
    for(i=1;i<n;i++)
    {
        cin>>num;
        a[i]=num+a[i-1];
        v.push_back({a[i-1]+1,a[i]});
    }
    int m,j=1;
    cin>>m;
    for(j=1;j<=m;j++)
    {
        int r,middle;
        cin>>r;
        int left=0,right=v.size()-1;
        while(left<=right)
        {
            middle=(left+right)/2;
            if(r>=v[middle].first&&r<=v[middle].second)
            {
                cout<<middle+1<<endl;
                break;
            }
            else if(r<v[middle].first)
            {
                right=middle-1;
            }
            else
            {
                left=middle+1;
            }

        }

    }

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a[3001]={0};
    int i,j;
    for(i=2;i<=sqrt(3001);i++)
    {
        if(a[i]==0)
        {
            for(j=i*i;j<=3001;j=j+i)
            {
                a[j]=1;
            }
        }
    }
    int n,cnt=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        vector<int>v;
        int temp=i,lnt=0;
        for(j=1;j<=sqrt(temp);j++)
        {
            if(temp%j==0&&a[j]==0)
            {
                v.push_back(j);
            }
            if(temp%j==0&&a[temp/j]==0)
            {
                v.push_back(temp/j);
            }

        }
        sort(v.begin(),v.end());
        int siz=unique(v.begin(),v.end())-v.begin();

        if(siz==3)
        {
          cnt++;
        }
    }
    cout<<cnt<<endl;


}

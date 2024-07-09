#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--)
     {
        vector<int>v;
        int i,j,m,cnt=0;
        cin>>m;
    for(i=1;i<=9;i++)
    {
        int sum=0;
        for(j=1;j<=4;j++)
        {
            sum=sum*10+i;
            v.push_back(sum);
        }

    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]==m)
        {
            string k=to_string(v[i]);
            cnt=cnt+k.size();

            break;
        }
        else
        {
            string s=to_string(v[i]);
            cnt=cnt+s.size();
        }
    }
    cout<<cnt<<endl;

    v.clear();
    }

}

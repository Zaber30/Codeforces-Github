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
        vector<pair<int,char>>v;
        int m,i,siz=0,cnt=0;
        string s;
        cin>>m;
        int a[m];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        cin>>s;
        for(i=0;i<m;i++)
        {
            v.push_back({a[i],s[i]});

        }
        sort(a,a+m);
        siz=unique(a,a+m)-a;
        sort(v.begin(),v.end());
        cnt=unique(v.begin(),v.end())-v.begin();
        if(cnt==siz)
           {
               cout<<"Yes"<<endl;
           }
        else
            {
                cout<<"NO"<<endl;
            }

    }
    return 0;

}

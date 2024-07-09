#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using ll=long long;
#define pi acos(-1);
const ll mod=1e9;
void solve()
{
    int i,j;
        vector<int>v;
        char ch[8][8];
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cin>>ch[i][j];
            }
        }
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(ch[i][j]=='R')
                {
                    v.push_back(i);
                }
            }
        }
        for(auto i:v)
        {
            int flag=0;
            for(j=0;j<8;j++)
            {
                if(ch[i][j]!='R')
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                 cout<<"R"<<endl;
                 return;
            }
        }
        cout<<"B"<<endl;

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
}


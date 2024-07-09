#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j;
        vector<string>v;
        vector<pair<int,int>>o;

        cin>>n;
        string s[(n*2-2)];
        for(j=0;j<((2*n)-2);j++)
        {
            cin>>s[j];
            o.push_back({s[j].size(),j});
            v.push_back(s[j]);
        }
        sort(o.begin(),o.end());
        string b=v[o[o.size()-1].second];
        string ne="";
        string rev="";
        int siz=b.size();
        int cnt=0,m=0;
        for(j=1;j<=siz;j++)
        {

            for(m=0;m<v.size();m++)
            {
                int k=0;
                if(b.substr(k,j)==v[m])
                {
                    cnt++;
                    break;
                }
            }


        }
        if(cnt==siz)
        {
            ne=ne+b;
            ne=ne+v[o[o.size()-2].second];
            rev=ne;
            reverse(ne.begin(),ne.end());
            if(rev==ne)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }


        }
        else
        {
            ne=ne+v[o[o.size()-2].second];
            ne=ne+b;
            rev=ne;
            reverse(ne.begin(),ne.end());
            if(ne==rev)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

    }

}

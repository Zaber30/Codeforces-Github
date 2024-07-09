#include<bits/stdc++.h>
using namespace std;
#define frist ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi acos(-1);
int main()
{
    frist;
    int t,i;
    cin>>t;
    map<string,int>map1,map2;
    string s[t];
    for(i=0;i<t;i++)
    {
        //string s[i];
        cin>>s[i];
        map1[s[i]]++;
    }
    for(i=0;i<t;i++)
    {
        if(map2[s[i]]>=1)
        {
            cout<<s[i]<<map2[s[i]]<<endl;
            map2[s[i]]++;
        }
        else
        {
            cout<<"OK"<<endl;
            map2[s[i]]++;
        }
    }

}

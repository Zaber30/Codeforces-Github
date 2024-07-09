#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        cout<<(s[m-1]-'a')+1<<endl;


    }
    return 0;
}

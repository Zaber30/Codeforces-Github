#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    string s="314159265358979323846264338327";
    for(i=0;i<t;i++)
    {
        int cnt=0,j;
        string r;
        cin>>r;
        for(j=0;j<r.size();j++)
        {
            if(s[j]==r[j])
            {
                cnt++;
            }
            else
            {
                break;
            }

        }
        cout<<cnt<<endl;

    }

}

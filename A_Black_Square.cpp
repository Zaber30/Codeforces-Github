#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[5]={0},sum=0;
    cin>>a[1]>>a[2]>>a[3]>>a[4];
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            sum=sum+a[1];

        }
        else if(s[i]=='2')
        {
            sum=sum+a[2];
        }
        else if(s[i]=='3')
        {
            sum=sum+a[3];
        }
        else if(s[i]=='4')
        {
            sum=sum+a[4];
        }
    }
    cout<<sum<<endl;
    return 0;
}

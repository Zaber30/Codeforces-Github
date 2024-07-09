#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,m,j,a[26]={0},b[26]={0},sum=0,differ,o=0;
        string s;
        cin>>n>>m;
        cin>>s;
        for(j=0;j<n;j++)
        {
            if(s[j]>='A'&&s[j]<='Z')
            {
                a[s[j]-'A']++;
            }
            else
            {
                b[s[j]-'a']++;
            }
        }
        for(j=0;j<26;j++)
        {
            sum=sum+min(a[j],b[j]);
            differ=abs(a[j]-b[j]);
            o=min(differ/2,m);
            m=m-o;
            sum=sum+o;
        }
        cout<<sum<<endl;

    }
}

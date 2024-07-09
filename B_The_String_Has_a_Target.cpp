#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast;
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j,a[26]={0},k;
        cin>>n;
        string s,s1="";
        cin>>s;
        for(j=0;j<n;j++)
        {
            a[s[j]-'a']++;
        }
        char ch;
        for(j=0;j<26;j++)
        {
            if(a[j]>0)
            {
                ch=j+'a';
                break;

            }
        }
        for(j=n-1;j>=0;j--)
        {
            if(s[j]==ch)
            {
                break;
            }
            else
            {
                s1=s1+s[j];
            }
        }
        for(k=j-1;k>=0;k--)
        {
            s1=s1+s[k];
        }
        reverse(s1.begin(),s1.end());
        cout<<ch<<s1<<endl;
    }




}

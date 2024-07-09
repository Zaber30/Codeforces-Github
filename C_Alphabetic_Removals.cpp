#include<bits/stdc++.h>
using namespace std;
using ll=long long;
string s1;
int main()
{
    int n,k, a[26]={0};
    cin>>n>>k;
    int i,j;
    string s,q;
    cin>>s;
    q=s;
    sort(q.begin(),q.end());
    for(i=0;i<k;i++)
    {
       a[q[i]-'a']++;
    }
    for(i=0;i<n;i++)
    {
        if(a[s[i]-'a']!=0)
        {
            a[s[i]-'a']--;
        }
        else
        {
            cout<<s[i];
        }
    }

}

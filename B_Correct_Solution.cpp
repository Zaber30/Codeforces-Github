#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,j;
    sort(s1.begin(),s1.end());

    if(s1[0]=='0'&&s1.size()>1)
    {
        swap(s1[0],s1[1]);
    }
    if(s1==s2)
    {
        cout<<"OK"<<endl;
    }
    else
    {
        cout<<"WRONG_ANSWER"<<endl;
    }
}

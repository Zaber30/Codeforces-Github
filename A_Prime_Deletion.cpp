#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int i,j;
        cin>>s;
        if(s.find('3')>s.find('1'))
        {
            cout<<"13"<<endl;
        }
        else
        {
            cout<<"31"<<endl;
        }
    }
}

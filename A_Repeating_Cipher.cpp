#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=1;;i++)
    {
        sum=i*(i+1)/2;
        if(sum>n)
        {
            break;
        }
        else
        {
            cout<<s[sum-1];
        }
    }
    return 0;
}

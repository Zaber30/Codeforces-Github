#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n;
    int i,j;
    cin>>n;
    int a[n];
    deque<int>v;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    if(is_sorted(a,a+n))
    {
        cout<<"0"<<endl;
    }
    else
    {

        int cnt=0,flag=0;

        for(i=n-1;i>=1;i--)
        {
            if(a[i]<=v.front())
            {
                v.push_front(a[i]);
                v.pop_back();
                cnt++;

            }
            else
            {

                break;
            }
        }
        if(is_sorted(v.begin(),v.end()))
        {
            cout<<cnt<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

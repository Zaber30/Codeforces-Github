#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,i=1,last=9;
        vector<int>v;
        cin>>n;
        if(n>45)
        {
            flag=1;
        }
        else
        {
            while(1)
            {
                /*if(n<10&&n>last)
                {
                    flag=1;
                    break;
                }*/
                if(n<=last)
                {
                    v.push_back(n);
                    break;
                }
                if(n>last)
                {
                    n=n-last;
                    v.push_back(last);
                    last--;
                }

            }
        }
        if(flag==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            reverse(v.begin(),v.end());
            for(i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
            cout<<endl;
        }
    }
}

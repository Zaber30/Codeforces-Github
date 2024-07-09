#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,j=9,k;
        vector<int>v;
        cin>>n;

        while(1)
        {
            if(n<=j)
            {
                v.push_back(n);

                break;
            }
            else
            {
                n=n-j;
                v.push_back(j);
                j--;
            }
        }
        for(k=v.size()-1;k>=0;k--)
        {
            cout<<v[k];
        }
        cout<<endl;
        v.clear();


    }
}

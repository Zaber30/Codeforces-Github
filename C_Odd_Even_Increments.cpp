#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int odd1,odd2,even1,even2;
         odd1=odd2=even1=even2=0;
        for(i=0;i<n;i=i+2)
        {
           if(a[i]%2==0)
           {
               even1++;
           }
           else
           {
               odd1++;
           }
        }
        for(i=1;i<n;i=i+2)
        {
            if(a[i]%2==0)
            {
                even2++;
            }
            else
            {
                odd2++;
            }
        }
        if((even1+even2)==n||(even1+odd2)==n||(odd1+even2)==n||(odd1+odd2)==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

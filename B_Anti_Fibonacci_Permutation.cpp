#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int i,j,k;
     if(n==3)
     {
         cout<<"3"<<" "<<"2"<<" "<<"1"<<endl;
         cout<<"1"<<" "<<"3"<<" "<<"2"<<endl;
         cout<<"3"<<" "<<"1"<<" "<<"2"<<endl;
     }
     else
     {
     for(i=1;i<=n;i++)
     {
         if(i==3)
         {
             /*for(j=n;j>3;j--)
             {
                 cout<<j<<" ";
             }*/
             cout<<"3"<<" "<<"1"<<" "<<"2"<<" ";
             for(j=4;j<=n;j++)
             {
                 cout<<j<<" ";
             }
             cout<<endl;
         }
         else
         {
             for(j=n;j>=1;j--)
             {
                 if(j!=i)
                 {
                     cout<<j<<" ";
                 }
             }
             cout<<i<<endl;
         }
     }
    }
    }
}

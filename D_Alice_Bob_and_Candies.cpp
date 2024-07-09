#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=n-1;
    int alice=0,bob=0,cnt=1,sum=0,sum1=0;
    while(l<=r)
    {
        if(cnt%2!=0)
        {
        if(sum>sum1&&cnt%2!=0)
        {
            cnt++;
            alice=alice+sum;
            sum1=sum;
            sum=0;
        }
        else
        {

            sum=sum+a[l];
            l++;
        }
        }
        else{
        if(sum>sum1&&cnt%2==0)
        {
            cnt++;
            bob=bob+sum;
            sum1=sum;
            sum=0;
        }
        else
        {
            sum=sum+a[r];
            r--;
        }
        }
    }
    if(sum>0&&cnt%2!=0)
    {
        //bob=bob+sum;
        alice=alice+sum;
       // cnt++;
    }
    else if(sum>0&&cnt%2==0)
    {
        //alice=alice+sum;
        bob=bob+sum;
        //cnt++;
    }
    cout<<cnt<<" "<<alice<<" "<<bob<<endl;
    }
}

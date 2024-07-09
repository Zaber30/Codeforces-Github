#include<bits/stdc++.h>
using ll=long long;
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll i,sum=0;
    string s=to_string(n);
    if(n<10)
    {
        cout<<n<<endl;
    }
    else
    {
        sum=9;
        for(i=1;i<s.size()-1;i++)
        {
            ll temp=((((pow(10,i+1)-pow(10,i)))*(i+1)));
            sum=sum+temp;
        }
        sum=sum+((n-pow(10,i)+1)*(i+1));
        cout<<sum<<endl;

    }
}

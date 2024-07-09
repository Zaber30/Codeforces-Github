#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    ll a,b;
    cin>>a>>b;
    while(1)
    {
        if(a==0||b==0)
        {
            break;
        }
       else if((a/(2*b))>=1)
            a=a-((2*b)*(a/(2*b)));
        else if((b/(2*a))>=1)
        {
            b=b-((2*a)*(b/(2*a)));

        }
        else if((2*a)>b||(2*b)>a||a==0||b==0)
        {
            break;
        }
    }
    cout<<a<<" "<<b<<endl;
}

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int d,b,c,sum;

    int a[3];
    cin>>d;
    cin>>b;
    cin>>c;
    a[0]=d/1;
    a[1]=b/2;
    a[2]=c/4;
    sort(a,a+3);
    sum=1*a[0]+2*a[0]+4*a[0];
    cout<<sum<<endl;
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cont=0;
    cin>>n;
    string x;
    cin>>x;
    for(int i=0;i<n-1;i++)
    {
        if(x[i]==x[i+1])
        {
            cont++;
        }
    }
    cout<<cont<<endl;
    return 0;


}

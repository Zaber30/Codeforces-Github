#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        int n,k,j=0,r,cot=0,sum=0,lot=0,l=0,m=0;
        cin>>n;
        int a[n],b[n];
        while(n)
        {
            r=n%10;
            a[j]=r;
            j++;
            cot++;
            n=n/10;
        }
        sum=pow(10,cot-1);
        for(k=j-1;k>=0;k--)
        {
            if(a[k]*sum!=0)
            {
                lot++;
                b[m]=a[k]*sum;
                m++;
            }

            sum=sum/10;
        }
        cout<<lot<<endl;
        for(l=0;l<m;l++)
        {
            cout<<b[l]<<" ";
        }
        cout<<endl;
    }


}

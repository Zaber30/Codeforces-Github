
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cont=0,lont=0,i=0,j=0,l=0,m=0,n=0,bot=0,k=0,a,b,p=0,q=0;
    cin>>a;
    for(b=1;b<=a;b++)
    {
        cont=0;
        lont=0;
        bot=0;


    string s;
    cin>>s;
    for( i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            cont++;
        }
        if(s[i]=='1')
        {
            lont++;
        }
    }
    if(cont==s.size()||lont==s.size())
    {
        cout<<0<<endl;
    }
    else
    {
        for(p=0;p<s.size();p++)
        {
            if(s[p]=='1')
            {
                k=p;
                break;
            }
        }
        for(l=s.size()-1;l>=0;l--)
        {
            if(s[l]=='1')
            {
                m=l;

                break;
            }

        }

        for(n=k;n<=m;n++)
        {
            if(s[n]=='0')
            {
                bot++;
            }
        }
        cout<<bot<<endl;
        bot=0;
    }

    }
}

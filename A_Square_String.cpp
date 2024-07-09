
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,cnt=0,len=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cnt=0,len=0;
        string s;
        cin>>s;
        len=s.size();
        if(len%2==0)
        {
            for(k=0;k<len/2;k++)
            {
                if(s[k]==s[len/2+k])
                {
                    cnt++;
                }
            }
            if(cnt==len/2)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}


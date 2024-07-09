#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,m;
        int i=0,cnt=0,mnt=0;
        cin>>s;
            for(i=1;i<s.size();i++)
            {
                if(s[i]==s[i-1])
                   {
                     cnt++;
                   }
                   if(s[0]==s[i])
                   {
                       mnt++;
                   }
            }
            if((s[0]==s[1]&&s[2]==s[3])&&s[0]!=s[2]&&s[1]!=s[3])
               {
                   cout<<s.size()<<endl;
               }
            else if(cnt==1)
            {
                if(mnt==2)
                {
                    cout<<s.size()+2<<endl;
                }
                else
                {
                    cout<<s.size()<<endl;
                }

            }
            else if(cnt==2)
            {
                cout<<s.size()+2<<endl;
            }
            else if(cnt==3)
            {
                cout<<"-1"<<endl;

            }
            else
            {
                cout<<s.size()<<endl;

            }

    }




    return 0;
}

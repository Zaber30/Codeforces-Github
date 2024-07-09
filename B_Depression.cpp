#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string s;
    cin>>s;
    int hour=0,minu=0;
    double sum1=0,sum2=0;
    hour=(hour*10)+((s[0]-'0'));
    hour=(hour*10)+((s[1]-'0'));
    minu=(minu*10)+((s[3]-'0'));
    minu=(minu*10)+((s[4]-'0'));
    if(hour==12||hour==0)
    {

        sum1=sum1+((minu*30)/60.0);
        sum2=sum2+(minu*6);
    }
    else
    {
        if(hour>12)
        {
            hour=hour-12;
        }
        sum1=sum1+(hour*30)+((minu*30)/60.0);
        sum2=sum2+(minu*6);
    }
    cout<<sum1<<" "<<sum2<<endl;


}

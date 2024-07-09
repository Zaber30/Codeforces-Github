#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int n,i,j,temp,temp1=-1;
    string s;
    cin>>s;
    int flag=0,flag1=0;
    temp=(s[s.size()-1]-'0');
    for(i=0;i<s.size()-1;i++){
        if((s[i]-'0')>temp&&(s[i]-'0')%2==0){
            temp1=i;
        }
        else if((s[i]-'0')<temp&&(s[i]-'0')%2==0){
            swap(s[i],s[s.size()-1]);
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<s<<endl;
    }
    else if(temp1!=-1){
        swap(s[temp1],s[s.size()-1]);
        cout<<s<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

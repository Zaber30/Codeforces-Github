#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sum=0;
    char s[26],t[100];
    scanf(" %[^\n]",t);
    for(i=0;i<26;i++)
    {
        s[i]=0;

    }
    for(j=0;j<strlen(t);j++)
    {
        s[t[j]-'a']++;

    }
    for(i=0;i<26;i++)
    {
        if(s[i]>1)
        {
            s[i]=1;
        }
        sum=sum+s[i];
    }
    if(sum%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}

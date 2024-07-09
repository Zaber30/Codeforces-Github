#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],b='.';
    int j;
    scanf(" %[^\n]",s);
    for(j=0;j<strlen(s);j++)
    {
        if(s[j]>=65&&s[j]<=92)
        {
            s[j]='a'+s[j]-'A';
        }
    }
    for(j=0;j<strlen(s);j++)
    {
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='y')
        {
            continue;
        }
        printf("%c%c",b,s[j]);
    }
    return 0;
}

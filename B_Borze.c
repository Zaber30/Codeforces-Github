#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    int i=0;
    scanf(" %[^\n]",s);
    for(;i<strlen(s);)
    {
        if(s[i]=='.')
        {
           printf("0");
           i++;
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            printf("1");
            i=i+2;
        }
         else if(s[i]=='-'&&s[i+1]=='-')
        {
            printf("2");
            i=i+2;
        }
    }
    return 0;
}

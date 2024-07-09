#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    int i,j;
    scanf(" %[^\n]",s1);
    scanf(" %[^\n]",s2);
    for(i=0,j=0;i<strlen(s1),j<strlen(s2);i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}

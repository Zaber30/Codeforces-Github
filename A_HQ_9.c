#include<stdio.h>
#include<string.h>
int main()
{
    int i,count=0;
    char str[101];
    scanf(" %[^\n]",str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            printf("YES\n");
            break;

        }
        else
        {
            count++;
        }
    }
    if(count==strlen(str))
    {
        printf("NO\n");
    }
    return 0;
}

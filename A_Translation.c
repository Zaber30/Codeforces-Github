#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0,len=0;
    char a[101],s[101];
    scanf(" %[^\n]",a);
    scanf(" %[^\n]",s);
    len=strlen(a);



    for(i=len-1,j=0;i>=0,j<strlen(a);i--,j++)
    {
        if(a[i]==s[j])
        {
            count++;
            continue;
        }
        else
        {
            break;
        }

    }
    if(count==len)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }




    return 0;

}


#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,s=0,r=0,len=0;
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            s++;
        }
        else
        {
            r++;
        }
    }


    if(s>r)
    {
        strupr(a);
    }
    else if(s<r)
    {
       strlwr(a);
    }
    else
    {
        strlwr(a);
    }
    printf("%s",a);
    return 0;


}

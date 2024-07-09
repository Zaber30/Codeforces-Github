#include<stdio.h>
#include<string.h>
int main()


{
    char a[1000];
    int len=0,i;
    gets(a);
    len=strlen(a);
    if(a[0]>=97&&a[0]<=122)
    {
        a[0]='A'+(a[0]-'a');
    }
    for(i=0;i<len;i++)
    {
        printf("%c",a[i]);
    }
    return 0;


}

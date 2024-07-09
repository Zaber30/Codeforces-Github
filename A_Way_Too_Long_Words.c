#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int n,i,len=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        len=strlen(a);
        if(len>10)
        {
            printf("%c%d%c",a[0],len-2,a[len-1]);
        }
        else
        {
            printf("%s",a);
        }
        printf("\n");

    }
    return 0;

}

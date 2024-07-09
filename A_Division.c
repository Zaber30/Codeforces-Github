#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m>=1900)
            printf("Division 1\n");
        else if(1900>m&&m>=1600)
        {
            printf("Division 2\n");
        }
        else if(1600>m&&m>=1400)
        {
            printf("Division 3\n");
        }
        else if(1400>m)
        {
            printf("Division 4\n");
        }
    }
    return 0;
}

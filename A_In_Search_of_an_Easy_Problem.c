#include<stdio.h>
int main()
{
    int n,i,x,c=0,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x==0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(d==0)
    {
        printf("EASY");
    }
    else
    {
        printf("HARD");
    }
    return 0;
}

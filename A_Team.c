#include<stdio.h>
int main()
{
    int n,i,k,l,m,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&k,&l,&m);
        if(k==1&&l==1||l==1&&m==1||k==1&&m==1||k==1&&1==1&&m==1)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}


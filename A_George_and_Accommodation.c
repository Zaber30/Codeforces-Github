#include<stdio.h>
int main()
{
    int n,m,k,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&m,&k);
        j=k-m;
        if(j>=2)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
    return 0;
}

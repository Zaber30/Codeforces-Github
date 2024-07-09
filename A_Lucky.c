#include<stdio.h>
int main()
{
    int m,n,i,sum=0,count=0,r,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);

    for(j=1;j<=3;j++)
    {
        r=n%10;
            sum=sum+r;
            n=n/10;

    }
            while(n!=0)
        {
            r=n%10;
            count=count+r;
            n=n/10;
        }
        if(sum==count)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum=0;
        count=0;
    }



    return 0;

}

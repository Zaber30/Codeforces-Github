#include<stdio.h>
int main()
{
    int n,b,c,l,m,i,j,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }
    scanf("%d",&b);
    for(j=1;j<=b;j++)
    {
        scanf("%d",&l);
        if(a[l]==0)
        {
            a[l]=1;
        }
    }
    scanf("%d",&c);
    for(j=1;j<=c;j++)
    {
        scanf("%d",&m);
        if(a[m]==0)
        {
            a[m]=1;
        }
    }
    for(i=1;i<=n;i++)

    {
        if(a[i]==0)
        {
            break;
        }

      sum=sum+1;

    }
    if(sum==n)
    {
        printf("I become the guy.\n");

    }
    else
    {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,a,b,c,i=1,sum1=0,sum2=0,sum3=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum1=a+b;
        sum2=b+c;
        sum3=c+a;
        if(sum1==c||sum2==a||sum3==b)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        sum1=0;sum2=0;sum3=0;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,x,i,r;
    scanf("%d%d",&n,&x);
    for(i=1;i<=x;i++)
    {
        r=n%10;
        if(r!=0)
        {
            n=n-1;
        }
        else
        {
            n=n/10;
        }


    }
    printf("%d",n);
    return 0;



}

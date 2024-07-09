#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   long long int a,b,c,a1=0,b1=0,t,i=1;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
            scanf("%lld%lld%lld",&a,&b,&c);
            a1=a-1;
            if(b<c)
            {
                b1=abs(b-c)+abs(c-1);
            }
            else
            {
                b1=abs(b-c)+(c-1);
            }
            if(a1<b1)
            {
                printf("1\n");
            }
            else if(a1>b1)
            {
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }
            a1=0;
            b1=0;

    }



}

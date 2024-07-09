#include<stdio.h>
int main()
{
    int n,m,i,j,count=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            count++;
            if(count%2!=0)
            {
                for(j=1;j<=m-1;j++)
                {
                    printf(".");
                }
                printf("#");
                printf("\n");
            }

            if(count%2==0)
            {
                printf("#");
                for(j=2;j<=m;j++)
                {
                    printf(".");
                }

                printf("\n");
            }
        }
            else
            {
                for(j=1;j<=m;j++)
                {
                    printf("#");
                }
                printf("\n");
            }



    }
    return 0;
}

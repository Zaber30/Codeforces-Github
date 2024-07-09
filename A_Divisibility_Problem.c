#include<stdio.h>
int main()
{
   int n,j,k,i,rem,main;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d%d",&j,&k);
       if(j%k==0)
        printf("0\n");
       else
       {



            rem=j%k;
            main=k-rem;
            printf("%d\n",main);
            main=0;



       }



   }
   return 0;
}

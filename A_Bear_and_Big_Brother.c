#include<stdio.h>
int main()
{
  int n,m,i=0;
    scanf("%d%d",&n,&m);
    while(1)
    {
        i++;
        n=n*3;
        m=m*2;


        if(n>m)
        {
            printf("%d",i);
            break;
        }




    }
    return 0;
}

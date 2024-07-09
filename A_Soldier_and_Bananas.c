#include<stdio.h>
int main()
{
    int k,n,w,sum=0,borrow=0,i;
    scanf("%d %d %d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum=sum+i*k;

    }
    borrow=sum-n;
    if(borrow<0)
    {
        borrow=0;
    }
    printf("%d",borrow);

        

    
    
    return 0;
        

       


    return 0;

}

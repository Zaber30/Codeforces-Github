#include<stdio.h>
int main()
{
    int n,rem=0,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while(1)
    {
        while(n!=0)
        {
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        if(sum%4==0)
        {
            printf("%d\n",temp);
            break;
        }
        else
            {
                temp=temp+1;
        n=temp;
        sum=0;



        }

    }
}

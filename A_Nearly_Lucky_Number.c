#include<stdio.h>
int main ()
{
     long long int n;
    int r,count=0,s=0;

    scanf("%lld",&n);
    while(n!=0)
    {
        r=n%10;

            if(r==4||r==7)
            {
                count++;
            }
            n=n/10;
    }
    if(count==7||count==4)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;


}

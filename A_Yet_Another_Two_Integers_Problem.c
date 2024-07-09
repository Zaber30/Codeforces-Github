#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   long long int n,a,b,i,need=0,sum=0;
    scanf("%lld",&n);
    while(n--)
        {

        scanf("%lld%lld",&a,&b);
        need=abs(a-b);
        sum=(need+9)/10;
        printf("%lld\n",sum);
        sum=0;
        need=0;
    }




    return 0;
}

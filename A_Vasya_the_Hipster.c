#include<stdio.h>
int main()
{
    int a,b,temp,output=0;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    output=(a-b)/2;
    printf("%d %d",b,output);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,a,b,c,i,l=0,m=0,o=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a ,&b ,&c);
        l=l+a;
        m=m+b;
        o=o+c;


    }
    
    if(l==0&&m==0&&o==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

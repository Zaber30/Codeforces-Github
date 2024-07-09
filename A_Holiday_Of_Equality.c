#include<stdio.h>
int main()
{
    int n,i,j,sum=0,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        sum=sum+(a[n-1]-a[i]);
    }
    printf("%d\n",sum);
    return 0;
}

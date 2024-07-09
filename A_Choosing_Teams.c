#include<stdio.h>
int main()
{
    int n,m,i=0,j=0,temp,count=0,count1=0;
    scanf("%d%d",&n,&m);
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
    for(i=0;i<n;i++)
    {
        if((5-a[i])>=m)
        {
            count++;
            if(count==3)
            {
                count1++;
                count=0;
            }
        }
    }
    printf("%d\n",count1);

}
